import java.util.Scanner;

public class Government extends Gla implements utility{

    String Governor = "Shri. P. S. Sreedharan Pillai";
    String CM = "Shri. Pramod Sawant";
    String COM_Array[] = {"SHRI. PRAMOD SAWANT",
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
    "SHRI. ALEIXO SEQUEIRA"};
    String COM = String.join("\n\n", COM_Array);


    @Override
    public void set_details() {

        Scanner sc = new Scanner(System.in);
        int menuchoice = 100;
        while (menuchoice!=0){
            System.out.println();
            System.out.println("=============================== *** GOA GOVERNMENT DETAILS *** ===============================");
            System.out.println("=============================== *** ENTER YOUR CHOICE *** ===============================");
            System.out.println();
            System.out.println("1] GOVERNOR \t\t\t 2] CHIEF MINISTER \t\t\t 3] COUNCIL OF MINISTERS");
            System.out.println();
            System.out.println("4] POLITICAL GROUPS \t\t\t");
            System.out.println();
//            System.out.println("=============================== *** ENTER 10 TO FOR MAIN MENU *** ===============================");
            System.out.println("=============================== *** ENTER 0 TO EXIT *** ===============================");
            System.out.println();
            print_assembly_year();
            System.out.print("=>");
            menuchoice = sc.nextInt();
            switch (menuchoice){
                case 1:
                    System.out.println("GOVERNOR FOR THE ASSEMBLY IS "+Governor);
//                    System.out.println("=============================== *** ENTER 10 TO FOR MAIN MENU *** ===============================");
                    System.out.println("=============================== *** ENTER 0 FOR MAIN MENU *** ===============================");
                    System.out.print("=>");
                    menuchoice = sc.nextInt();
                    break;
                case 2:
                    System.out.println("CHIEF MINISTER OF GOA IS "+CM);
//                    System.out.println("=============================== *** ENTER 10 TO FOR MAIN MENU *** ===============================");
                    System.out.println("=============================== *** ENTER 0 FOR MAIN MENU *** ===============================");
                    System.out.print("=>");
                    menuchoice = sc.nextInt();
                    break;
                case 3:
                    System.out.println("COUNCIL OF MINISTERS ARE "+COM);
//                    System.out.println("=============================== *** ENTER 10 TO FOR MAIN MENU *** ===============================");
                    System.out.println("=============================== *** ENTER 0 FOR MAIN MENU *** ===============================");
                    System.out.print("=>");
                    menuchoice = sc.nextInt();
                    break;
                case 4:
                    System.out.println("POLITICAL GROUPS ARE \n\n"+Political_groups);
//                    System.out.println("=============================== *** ENTER 10 TO FOR MAIN MENU *** ===============================");
                    System.out.println("=============================== *** ENTER 0 FOR MAIN MENU *** ===============================");
                    System.out.print("=>");
                    menuchoice = sc.nextInt();
                    break;
                case 0:
                    System.exit(0);
                default:
                    System.out.println("PLEASE ENTER VALID INPUT");
            }
        }


    }
}
