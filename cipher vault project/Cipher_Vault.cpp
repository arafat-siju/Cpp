#include <iostream>
#include <string>
#include <limits>
using namespace std;

class Cipher {
public:
    void displayResult(string label, string result) {
        cout << "\n----------------------------------\n";
        cout << label << ":\n";
        cout << result << "\n";
        cout << "----------------------------------\n" << endl;
    }
};

class CaesarCipher : public Cipher {
private:
    int shift;

public:
    CaesarCipher(int x) {
        shift = ((x % 26) + 26) % 26;
        cout << "Selected shifting value = " << shift << endl;
    }

    string encrypt(string text) {
        string result = "";

        for (int i = 0; i < (int)text.size(); i++) {
            char ch = text[i];

            if (ch >= 'A' && ch <= 'Z')
                result += (char)(((ch - 'A') + shift) % 26 + 'A');
            else if (ch >= 'a' && ch <= 'z')
                result += (char)(((ch - 'a') + shift) % 26 + 'a');
            else
                result += ch;
        }

        return result;
    }

    string decrypt(string text) {
        string result = "";

        for (int i = 0; i < (int)text.size(); i++) {
            char ch = text[i];

            if (ch >= 'A' && ch <= 'Z')
                result += (char)(((ch - 'A') - shift + 26) % 26 + 'A');
            else if (ch >= 'a' && ch <= 'z')
                result += (char)(((ch - 'a') - shift + 26) % 26 + 'a');
            else
                result += ch;
        }

        return result;
    }

    void bruteForce(string cipherText) {
        cout << "\nBrute-Force Results (all 25 shifts):\n";

        for (int s = 1; s <= 25; s++) {
            string result = "";

            for (int i = 0; i < (int)cipherText.size(); i++) {
                char ch = cipherText[i];

                if (ch >= 'A' && ch <= 'Z')
                    result += (char)(((ch - 'A') - s + 26) % 26 + 'A');
                else if (ch >= 'a' && ch <= 'z')
                    result += (char)(((ch - 'a') - s + 26) % 26 + 'a');
                else
                    result += ch;
            }

            cout << "  Shift " << (s < 10 ? " " : "") << s << ": " << result << endl;
        }
    }
};


class AtbashCipher : public Cipher {
public:
    string encrypt(string text) {
        string result = "";

        for (int i = 0; i < (int)text.size(); i++) {
            char ch = text[i];

            if (ch >= 'A' && ch <= 'Z')
                result += (char)('A' + ('Z' - ch));
            else if (ch >= 'a' && ch <= 'z')
                result += (char)('a' + ('z' - ch));
            else
                result += ch;
        }

        return result;
    }

    string decrypt(string text) {
        return encrypt(text);
    }
};


class ROT13 : public Cipher {
public:
    string encrypt(string text) {
        string result = "";

        for (int i = 0; i < (int)text.size(); i++) {
            char ch = text[i];

            if (ch >= 'A' && ch <= 'Z')
                result += (char)((ch - 'A' + 13) % 26 + 'A');
            else if (ch >= 'a' && ch <= 'z')
                result += (char)((ch - 'a' + 13) % 26 + 'a');
            else
                result += ch;
        }

        return result;
    }

    string decrypt(string text) {
        return encrypt(text);
    }
};


void printMenu() {
    cout << "\n=======  CIPHER VAULT  ======\n";
    cout << "  1. Caesar Cipher\n";
    cout << "  2. Atbash Cipher\n";
    cout << "  3. ROT13 Cipher\n";
    cout << "  4. Brute-Force Caesar\n";
    cout << "  5. Exit\n";
    cout << "  Enter your choice: ";
}
string getText(string prompt) {
    string text;
    cout << prompt;
    getline(cin, text);
    return text;
}
char getOperation() {
    char op;
    cout << "\nOperation - Type 'E' for encrypt or 'D' for decrypt: ";
    cin >> op;
    cin.ignore();
    return op;
}

void handle_caesar() {
    cout << "\n----   CAESAR CIPHER   ----\n";

    int shift;

    while (true) {
        cout << "Enter shift value (1-25): ";
        cin >> shift;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "  ***  Invalid input. Please enter a number.  ***  \n";
        }
        else {
            cin.ignore();
            break;
        }
    }

    CaesarCipher cipher(shift);

    string text = getText("Enter text: ");
    char op = getOperation();

    if (op == 'E' || op == 'e')
        cipher.displayResult("Encrypted", cipher.encrypt(text));
    else if (op == 'D' || op == 'd')
        cipher.displayResult("Decrypted", cipher.decrypt(text));
    else
        cout << "  ***  Invalid operation.  ***" << endl;
}
void handle_atbash() {
    cout << "\n----   ATBASH CIPHER   ----\n";
    cout << "(A<->Z, B<->Y ... encrypt = decrypt)\n";

    AtbashCipher cipher;
    cin.ignore();

    string text = getText("Enter text: ");

    cipher.displayResult("Result", cipher.encrypt(text));
}
void handle_ROT13() {
    cout << "\n----   ROT13 CIPHER   ----\n";
    cout << "(Fixed shift of 13 ... encrypt = decrypt)\n";

    ROT13 cipher;
    cin.ignore();

    string text = getText("Enter text: ");

    cipher.displayResult("Result", cipher.encrypt(text));
}
void handle_Brute_force() {
    cout << "\n----   BRUTE-FORCE CAESAR    -----\n";

    cin.ignore();

    string text = getText("Enter text to brute-force: ");

    CaesarCipher cipher(0);
    cipher.bruteForce(text);
}


int main() {
    int choice;

    cout << "\n Welcome!\n";

    do {
        printMenu();
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\n  ***  Invalid input. Please enter a number between 1-5.  *** \n\n";
            continue;
        }
        switch (choice) {
            case 1:
                handle_caesar();
                break;
            case 2:
                handle_atbash();
                break;
            case 3:
                handle_ROT13();
                break;
            case 4:
                handle_Brute_force();
                break;
            case 5:
                cout << "\n..... Goodbye!\n\n";
                break;
            default:
                cout << "\n  **  Invalid choice. Please enter 1-5.  **  \n\n";
        }
    }
    while (choice != 5);
    return 0;
}
