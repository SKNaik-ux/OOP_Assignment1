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
class Contact : public Gla, public Utility {
private:
    void GeneralContact() const {
        cout << "Goa Legislature Secretariat:" << endl;
        cout << "Assembly Complex - Alto Porvorim Goa Pin 403521." << endl;
        cout << "Tel No: 0832-2493315" << endl;
        cout << "Fax: 91-0832-2411054" << endl;
        cout << "Direct No: 0832-2410917" << endl;
        cout << "Email: sec-leg.goa@nic.in" << endl;
    }

    void Secretarys_office() const {
        vector<vector<string>> contactData = {
            {"Perpetual Theresa Fernandes", "Reporter & P.A. to Secretary", "R. No S201, 2nd Floor Goa Legislature Secretariat Porvorim Bardez Goa", "832-2493315, 2410917", "08322411054", ""},
            {"Chaitanya Joshi", "St. Grade II", "R. No S201, 2nd Floor Goa Legislature Secretariat Porvorim Bardez Goa", "0832-2493315", "", ""},
            {"Timothy Quadros", "MTS", "R. No S201, 2nd Floor Goa Legislature Secretariat Porvorim Bardez Goa", "832-2493315", "", ""},
            {"Rahul Bale", "MTS", "R. No S201, 2nd Floor Goa Legislature Secretariat Porvorim Bardez Goa", "0832-2493315", "", ""}
        };

        for (size_t i = 0; i < contactData.size(); ++i) {
            cout << "Contact " << (i + 1) << endl;
            cout << "Name: " << contactData[i][0] << endl;
            cout << "Designation: " << contactData[i][1] << endl;
            cout << "Address: " << contactData[i][2] << endl;
            cout << "Phone Number: " << contactData[i][3] << endl;
            cout << "Fax: " << contactData[i][4] << endl;
            cout << "Email: " << contactData[i][5] << endl;
            cout << endl;
        }
    }

    void legislation_branch() const {
        vector<vector<string>> contactData = {
            {"Farida Muzawar", "1st Floor, Goa Legislature Secretariat Porvorim Bardez Goa", "Section Officer", "08322-493244, 2413830"},
            {"Shewta Naik", "1st Floor, Goa Legislature Secretariat Porvorim Bardez Goa", "Senior Assistant", "08322-493244, 2413830"},
            {"Patricia Machado", "1st Floor, Goa Legislature Secretariat Porvorim Bardez Goa", "Assistant", "08322-493244, 2413830"},
            {"Nivedita Munj", "1st Floor, Goa Legislature Secretariat Porvorim Bardez Goa", "Junior Assistant", "08322-493244, 2413830"},
            {"Tulshidas Vengurlekar", "R. No. S116 First Floor Goa Legislature Secretariat Porvorim Bardez Goa", "MTS", "08322493244, 0832-2413830"},
            {"Laxmi Naik", "R. No. S116 First Floor Goa Legislature Secretariat Porvorim Bardez Goa", "MTS", "08322493244, 0832-2413830"}
        };

        for (size_t i = 0; i < contactData.size(); ++i) {
            cout << "Contact " << (i + 1) << endl;
            cout << "Name: " << contactData[i][0] << endl;
            cout << "Address: " << contactData[i][1] << endl;
            cout << "Designation: " << contactData[i][2] << endl;
            cout << "Phone Number: " << contactData[i][3] << endl;
            cout << endl;
        }
    }

public:
    void set_details() override {
        int menuchoice = 100;

        while (menuchoice != 0) {
            cout << endl;
            cout << "=============================== *** GOA LEGISLATURE CONTACT *** ===============================" << endl;
            cout << "=============================== *** ENTER YOUR CHOICE *** ===============================" << endl;
            cout << endl;
            cout << "1] GENERAL CONTACT DETAILS \t\t\t 2] SECRETARY'S OFFICE \t\t\t 3] LEGISLATION BRANCH " << endl;
            cout << endl;
            cout << "=============================== *** ENTER 0 TO EXIT *** ===============================" << endl;
            cout << endl;
            print_assembly_year();
            cout << "=> ";
            cin >> menuchoice;

            switch (menuchoice) {
                case 1:
                    cout << "GENERAL CONTACT DETAILS:" << endl;
                    GeneralContact();
                    break;
                case 2:
                    cout << "SECRETARY'S OFFICE:" << endl;
                    Secretarys_office();
                    break;
                case 3:
                    cout << "LEGISLATION BRANCH" << endl;
                    legislation_branch();
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
