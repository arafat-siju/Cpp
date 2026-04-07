#include <iostream>
using namespace std;

class Person{
    private:
        int roll;
        string name;
    public:
    // access private component by getter-setter method
        void set_both() {
        cout << "Enter Your Name: ";
        cin >> name;
        cout << "Enter Your Roll: ";
        cin >> roll;
        cout << "\n";
        }

        int get_roll() {
            return roll;
        }
        string get_name() {
            return name;
        }

        void get_both() {
            cout << "\nName: " << get_name() << "\nRoll: " << get_roll() << endl;
        }
};

int main()
{
    int i,n;
    cout << "Enter how many data u want: ";
    cin >> n;
    cout <<"\n";

    Person p1[100];

    for (i = 0; i < n; i++) {
        p1[i].set_both();
    }

    for (i = 0; i < n; i++) {
        p1[i].get_both();
    }

    return 0;
}
