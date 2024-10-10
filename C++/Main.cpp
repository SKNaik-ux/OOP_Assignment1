// AUTHER: SAISH NAIK
// ROLLNO: 39


#include <iostream>
#include <memory>

using namespace std;

// Abstract base class
class Utility {
public:
    virtual void set_details() = 0;
    virtual ~Utility() = default;
};

class Legislature : public Utility {
public:
    void set_details() override {
        cout << "Legislature details set." << endl;
    }
};

class Government : public Utility {
public:
    void set_details() override {
        cout << "Government details set." << endl;
    }
};

class Links : public Utility {
public:
    void set_details() override {
        cout << "Links details set." << endl;
    }
};

class Contact : public Utility {
public:
    void set_details() override {
        cout << "Contact details set." << endl;
    }
};

// Function to display the main menu
void main_menu() {
    cout << endl;
    cout << "======================= *** AUTHOR:SAISH NAIK *** =======================" << endl;
    cout << "======================= *** ROLLNO:39 *** =======================" << endl;
    cout << endl;
    cout << "======================= *** WELCOME TO GOA LEGISLATIVE ASSEMBLY PORTAL *** =======================" << endl;
    cout << endl;
    cout << "=============================== *** ENTER YOUR CHOICE *** ===============================" << endl;
    cout << endl;
    cout << "A] LEGISLATURE \t\t\t B] GOVERNMENT \t\t\t C] LINKS" << endl;
    cout << endl;
    cout << "D] CONTACT" << endl;
    cout << endl;
    cout << "=============================== *** ENTER X TO EXIT *** ===============================" << endl;
}

int main() {
    char choice = '#';

    auto legislature = make_unique<Legislature>();
    auto government = make_unique<Government>();
    auto links = make_unique<Links>();
    auto contact = make_unique<Contact>();

    while (choice != 'X' && choice != 'x') {
        main_menu();
        cout << "=> ";
        cin >> choice;

        switch (choice) {
            case 'A':
            case 'a':
                legislature->set_details();
                break;
            case 'B':
            case 'b':
                government->set_details();
                break;
            case 'C':
            case 'c':
                links->set_details();
                break;
            case 'D':
            case 'd':
                contact->set_details();
                break;
            case 'X':
            case 'x':
                return 0;
            default:
                cout << "ENTER VALID INPUT!!" << endl;
                break;
        }
    }

    return 0;
}
