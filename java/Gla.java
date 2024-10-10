public class Gla {
    int Assembly_year = 2024;
    String Political_groupsArray[] = {"1. BHARATIYA JANATA PARTY(28)",
    "2. MAHARASHRAWADI GOMANTAK PARTY(2)",
    "3. INDEPENDANT(3)",
    "4. INDIAN NATIONAL CONGRESS(3)",
    "5. AAM AADMI PARTY(2)",
    "6. REVOLUTIONARY GOANS PARTY(1)"};
    String Political_groups = String.join("\n\n", Political_groupsArray);

    void print_assembly_year(){
        System.out.println("######## NOTE: INFORMATION OF THE GOA LEGISLATURE IS UPTO THE FISCAL YEAR "+ Assembly_year +". ########");
    }

}
