#include <iostream>
using namespace std;

class Person {
    private:
        int age;
        string name;
    public:
        // Setter method
        void set_both() {
            cout << "Enter Your Age: ";
            cin >> age;
            cout << "Enter Your Name: ";
            cin >> name;
        }

        // Getter methods
        int get_age() {
            return age;
        }

        string get_name() {
            return name;
        }

        // Display both values
        void get_both() {
            cout << "\nAge: " << get_age() << "\nName: " << get_name() << endl;
        }

        // Manipulate age (example: increase or decrease)
        void manipulate_age(bool increase) {
            if (increase)
                age++;
            else
                age--;
        }

        // Sum two ages
        void sum_two_age(Person p1) {
            int result = age + p1.get_age();
            cout << "Sum of ages: " << result << endl;
        }
};

int main() {
    Person p1[3];

    // Input for 3 persons
    for (int i = 0; i < 3; i++) {
        cout << "\nPerson " << i + 1 << ":\n";
        p1[i].set_both();
    }

    // Output for 3 persons
    for (int i = 0; i < 3; i++) {
        cout << "\nPerson " << i + 1 << " details:";
        p1[i].get_both();
    }

    // Example: sum ages of person 1 and person 2
    p1[0].sum_two_age(p1[1]);

    return 0;
}