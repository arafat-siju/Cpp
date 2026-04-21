#include <iostream>
using namespace std;

int count = 0;

class Alpha {
public:
    Alpha() {
        count++;
        cout << "\nNo. of object Created " << count;
    }
    ~Alpha() {
        cout << "\nNo. of object Destroyed " << count;
        count--;
    }
};

int main() {
    cout << "Enter main\n";
    Alpha A1, A2, A3, A4;
    {
        cout << "\n\nEnter Block1\n";
        Alpha A5;
    }
    {
        cout << "\n\nEnter Block2\n";
        Alpha A6;
    }
    return 0;
}
