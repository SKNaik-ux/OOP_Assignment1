#include <iostream>
#include <vector>
#include <string>

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
class Links : public Gla, public Utility {
private:
    vector<string> websites_array = {
        "RAJBHAVAN- https://rsn337u7yjoyik3szrrr2k3lbch35s.oastify.com/",
        "GOA UNIVERSITY- https://www.unigoa.ac.in/",
        "GOVT PRINTING PRESS- https://goaprintingpress.gov.in/",
        "HIGH COURT OF BOMBAY AT GOA- https://hcbombayatgoa.nic.in/",
        "DIRECTORATE OF HEALTH SERVICES- https://www.dhsgoa.gov.in/",
        "DEPT OF WATER RESOURCES- https://www.goawrd.gov.in/",
        "DIRECTORATE OF PANCHAYATS- https://www.panchayatsgoa.gov.in/",
        "GOA GOVERNMENT- https://www.goa.gov.in/",
        "DEPT OF TOURISM- https://www.goatourism.gov.in/",
        "KADAMBA TRANSPORT SERVICES GOA- https://ktclgoa.com/",
        "oHERALDO- https://www.heraldgoa.in/"
    };

public:
    void set_details() override {
        int menuchoice = 100;

        while (menuchoice != 0) {
            cout << endl;
            cout << "=============================== *** GOA LEGISLATURE LINKS *** ===============================" << endl;
            cout << "=============================== *** ENTER YOUR CHOICE *** ===============================" << endl;
            cout << endl;
            cout << "1] WEBSITES" << endl;
            cout << endl;
            cout << "=============================== *** ENTER 0 TO EXIT *** ===============================" << endl;
            cout << endl;
            print_assembly_year();
            cout << "=> ";
            cin >> menuchoice;

            switch (menuchoice) {
                case 1:
                    cout << "WEBSITES:" << endl;
                    for (const auto& website : websites_array) {
                        cout << website << endl;
                    }
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
