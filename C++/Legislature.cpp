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
class Legislature : public Gla, public Utility {
private:
    string speaker = "Shri. Ramesh Tawadkar";
    string duty_speaker = "Shri. Joshua De Souza";
    string oppo_leader = "Shri. Yuri Alemao";
    vector<string> MLA_Array = {
        "SHRI. JIT AROLKAR",
        "SHRI. PRAVIN ARLEKAR",
        "SHRI. CHANDRAKANT SHETYE",
        "SHRI. NILKANTH HALARNKAR",
        "SHRI. JOSHUA DE SOUZA",
        "SMT. DELILAH LOBO",
        "SHRI. KEDAR NAIK",
        "SHRI. MICHAEL LOBO",
        "SHRI. ROHAN KHAUNTE",
        "SHRI. CARLOS FERREIRA",
        "SHRI. ATANASIO MONSERRATE",
        "SMT. JENNIFER MONSERRATE",
        "SHRI. RODOLFO FERNANDES",
        "SHRI. VIRESH BORKAR",
        "SHRI. RAJESH FALDESSAI",
        "SHRI. PREMENDRA SHET",
        "SHRI. PRAMOD SAWANT",
        "SMT. DEVIYA RANE",
        "SHRI. VISHWAJIT RANE",
        "SHRI. GOVIND GAUDE",
        "SHRI. RAVI NAIK",
        "SHRI. SUBHASH SHIRODKAR",
        "SHRI. RAMKRISHNA ALIAS SUDIN DHAVALIKAR",
        "SHRI. SANKALP AMONKAR",
        "SHRI. KRISHNA SALKAR",
        "SHRI. MAUVIN GODINHO",
        "SHRI. ANTONIO VAS",
        "SHRI. ALEIXO SEQUEIRA",
        "SHRI. ALEIXO LOURENCO",
        "SHRI. VIJAI SARDESAI",
        "SHRI. DIGAMBAR KAMAT",
        "SHRI. VENZY VIEGAS",
        "SHRI. ULHAS TUENKAR",
        "SHRI. YURI ALEMAO",
        "SHRI. CRUZ SILVA",
        "SHRI. ALTONE D’COSTA",
        "SHRI. NILESH CABRAL",
        "SHRI. GANESH GAONKAR",
        "SHRI. SUBHASH PHAL DESSAI",
        "SHRI. RAMESH TAWADKAR"
    };
    string Secretary = "Smt. Namrata Ulman";
    vector<string> RTI_Array = {"SHRI MOHAN GAONKAR", "SMT N. ULMAN"};

public:
    void set_details() override {
        int menuchoice = 100;

        while (menuchoice != 0) {
            cout << endl;
            cout << "=============================== *** GOA LEGISLATURE DETAILS *** ===============================" << endl;
            cout << "=============================== *** ENTER YOUR CHOICE *** ===============================" << endl;
            cout << endl;
            cout << "1] SPEAKER \t\t\t 2] DUTY SPEAKER \t\t\t 3] OPPOSITION LEADER" << endl;
            cout << endl;
            cout << "4] LIST OF MLA'S \t\t\t 5] SECRETARY \t\t\t 6] RTI OFFICERS" << endl;
            cout << endl;
            cout << "=============================== *** ENTER 0 TO EXIT *** ===============================" << endl;
            cout << endl;
            print_assembly_year();
            cout << "=> ";
            cin >> menuchoice;

            switch (menuchoice) {
                case 1:
                    cout << "SPEAKER FOR THE ASSEMBLY IS " << speaker << endl;
                    break;
                case 2:
                    cout << "DUTY SPEAKER FOR THE ASSEMBLY IS " << duty_speaker << endl;
                    break;
                case 3:
                    cout << "OPPOSITION LEADER IS " << oppo_leader << endl;
                    break;
                case 4:
                    cout << "----LIST OF MLA'S----" << endl << endl;
                    for (const auto& mla : MLA_Array) {
                        cout << mla << endl;
                    }
                    break;
                case 5:
                    cout << "SECRETARY IS " << Secretary << endl;
                    break;
                case 6:
                    cout << "----RTI OFFICERS ARE----" << endl << endl;
                    for (const auto& rti : RTI_Array) {
                        cout << rti << endl;
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
