#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

// Abstract base class
class Utility {
public:
    virtual void set_details() = 0;
    virtual ~Utility() = default;
};

class Gla {
private:
    int Assembly_year = 2024;
    vector<string> Political_groupsArray = {
        "1. BHARATIYA JANATA PARTY(28)",
        "2. MAHARASHRAWADI GOMANTAK PARTY(2)",
        "3. INDEPENDANT(3)",
        "4. INDIAN NATIONAL CONGRESS(3)",
        "5. AAM AADMI PARTY(2)",
        "6. REVOLUTIONARY GOANS PARTY(1)"
    };

public:
    void print_assembly_year() const {
        cout << "######## NOTE: INFORMATION OF THE GOA LEGISLATURE IS UPTO THE FISCAL YEAR " << Assembly_year << ". ########" << endl;
    }

    string get_political_groups() const {
        string result;
        for (const auto& group : Political_groupsArray) {
            result += group + "\n\n";
        }
        return result;
    }
};

// Derived class
class Government : public Gla, public Utility {
private:
    string Governor = "Shri. P. S. Sreedharan Pillai";
    string CM = "Shri. Pramod Sawant";
    vector<string> COM_Array = {
        "SHRI. PRAMOD SAWANT",
        "SHRI. VISHWAJIT RANE",
        "SHRI. MAUVIN GODINHO",
        "SHRI. RAVI NAIK",
        "SHRI. SUBHASH SHIRODKAR",
        "SHRI. ROHAN KHAUNTE",
        "SHRI. GOVIND GAUDE",
        "SHRI. ATANASIO MONSERRATE",
        "SHRI. RAMKRISHNA ALIAS SUDIN DHAVALIKAR",
        "SHRI. NILKANTH HALARNKAR",
        "SHRI. SUBHASH PHAL DESSAI",
        "SHRI. ALEIXO SEQUEIRA"
    };

public:
    void set_details() override {
        int menuchoice = 100;

        while (menuchoice != 0) {
            cout << endl;
            cout << "=============================== *** GOA GOVERNMENT DETAILS *** ===============================" << endl;
            cout << "=============================== *** ENTER YOUR CHOICE *** ===============================" << endl;
            cout << endl;
            cout << "1] GOVERNOR \t\t\t 2] CHIEF MINISTER \t\t\t 3] COUNCIL OF MINISTERS" << endl;
            cout << endl;
            cout << "4] POLITICAL GROUPS" << endl;
            cout << endl;
            cout << "=============================== *** ENTER 0 TO EXIT *** ===============================" << endl;
            cout << endl;
            print_assembly_year();
            cout << "=> ";
            cin >> menuchoice;

            switch (menuchoice) {
                case 1:
                    cout << "GOVERNOR FOR THE ASSEMBLY IS " << Governor << endl;
                    break;
                case 2:
                    cout << "CHIEF MINISTER OF GOA IS " << CM << endl;
                    break;
                case 3:
                    cout << "COUNCIL OF MINISTERS ARE " << endl;
                    for (const auto& member : COM_Array) {
                        cout << member << endl;
                    }
                    break;
                case 4:
                    cout << "POLITICAL GROUPS ARE" << endl << endl;
                    cout << get_political_groups() << endl;
                    break;
                case 0:
                    exit(0);
                default:
                    cout << "PLEASE ENTER VALID INPUT" << endl;
            }
            cout << "=============================== *** ENTER 0 TO EXIT *** ===============================" << endl;
            cout << "=> ";
            cin >> menuchoice;
        }
    }
};
