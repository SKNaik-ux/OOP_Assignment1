#include <iostream>
#include <vector>
#include <string>
#include <sstream> 

using namespace std;

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
        ostringstream oss;
        for (const auto& group : Political_groupsArray) {
            oss << group << "\n\n";
        }
        return oss.str();
    }
};

int main() {
    Gla gla;
    gla.print_assembly_year();
    
    // Printing the political groups
    cout << gla.get_political_groups() << endl;

    return 0;
}
