import java.util.Scanner;

public class Legislature extends Gla implements utility{

    String speaker = "Shri. Ramesh Tawadkar";
    String duty_speaker = "Shri. Joshua De Souza";
    String oppo_leader = "Shri. Yuri Alemao";
    String MLA_Array[] = {"SHRI. JIT AROLKAR\n",
    "SHRI. PRAVIN ARLEKAR\n",
    "SHRI. CHANDRAKANT SHETYE\n",
    "SHRI. NILKANTH HALARNKAR\n",
    "SHRI. JOSHUA DE SOUZA\n",
    "SMT. DELILAH LOBO\n",
    "SHRI. KEDAR NAIK\n",
    "SHRI. MICHAEL LOBO\n",
    "SHRI. ROHAN KHAUNTE\n",
    "SHRI. CARLOS FERREIRA\n",
    "SHRI. ATANASIO MONSERRATE\n",
    "SMT. JENNIFER MONSERRATE\n",
    "SHRI. RODOLFO FERNANDES\n",
    "SHRI. VIRESH BORKAR\n",
    "SHRI. RAJESH FALDESSAI\n",
    "SHRI. PREMENDRA SHET\n",
    "SHRI. PRAMOD SAWANT\n",
    "SMT. DEVIYA RANE\n",
    "SHRI. VISHWAJIT RANE\n",
    "SHRI. GOVIND GAUDE\n",
    "SHRI. RAVI NAIK\n",
    "SHRI. SUBHASH SHIRODKAR\n",
    "SHRI. RAMKRISHNA ALIAS SUDIN DHAVALIKAR\n",
    "SHRI. SANKALP AMONKAR\n",
    "SHRI. KRISHNA SALKAR\n",
    "SHRI. MAUVIN GODINHO\n",
    "SHRI. ANTONIO VAS\n",
    "SHRI. ALEIXO SEQUEIRA\n",
    "SHRI. ALEIXO LOURENCO\n",
    "SHRI. VIJAI SARDESAI\n",
    "SHRI. DIGAMBAR KAMAT\n",
    "SHRI. VENZY VIEGAS\n",
    "SHRI. ULHAS TUENKAR\n",
    "SHRI. YURI ALEMAO\n",
    "SHRI. CRUZ SILVA\n",
    "SHRI. ALTONE D’COSTA\n",
    "SHRI. NILESH CABRAL\n",
    "SHRI. GANESH GAONKAR\n",
    "SHRI. SUBHASH PHAL DESSAI\n",
    "SHRI. RAMESH TAWADKAR\n"};
    String MLA_leaders = String.join("\n\n", MLA_Array);
    String Secretary = "Smt. Namrata Ulman";
    String RTI_Array[] = {"SHRI MOHAN GAONKAR","SMT N. ULMAN"};
    String RTI_officers = String.join("\n\n", RTI_Array);



    @Override
    public void set_details(){
        Scanner sc = new Scanner(System.in);
        int menuchoice = 100;
        while (menuchoice!=0){
            System.out.println();
            System.out.println("=============================== *** GOA LEGISLATURE DETAILS *** ===============================");
            System.out.println("=============================== *** ENTER YOUR CHOICE *** ===============================");
            System.out.println();
            System.out.println("1] SPEAKER \t\t\t 2] DUTY SPEAKER \t\t\t 3] OPPOSITION LEADER");
            System.out.println();
            System.out.println("4] LIST OF MLA'S \t\t\t 5] SECRETARY \t\t\t 6] RTI OFFICERS");
            System.out.println();
//            System.out.println("=============================== *** ENTER 10 TO FOR MAIN MENU *** ===============================");
            System.out.println("=============================== *** ENTER 0 TO EXIT *** ===============================");
            System.out.println();
            print_assembly_year();
            System.out.print("=>");
            menuchoice = sc.nextInt();
            switch (menuchoice){
                case 1:
                    System.out.println("SPEAKER FOR THE ASSEMBLY IS "+speaker);
//                    System.out.println("=============================== *** ENTER 10 TO FOR MAIN MENU *** ===============================");
                    System.out.println("=============================== *** ENTER 0 FOR MAIN MENU *** ===============================");
                    System.out.print("=>");
                    menuchoice = sc.nextInt();
                    break;
                case 2:
                    System.out.println("DUTY SPEAKER FOR THE ASSEMBLY IS "+duty_speaker);
//                    System.out.println("=============================== *** ENTER 10 TO FOR MAIN MENU *** ===============================");
                    System.out.println("=============================== *** ENTER 0 FOR MAIN MENU *** ===============================");
                    System.out.print("=>");
                    menuchoice = sc.nextInt();
                    break;
                case 3:
                    System.out.println("OPPOSITION LEADER IS "+oppo_leader);
//                    System.out.println("=============================== *** ENTER 10 TO FOR MAIN MENU *** ===============================");
                    System.out.println("=============================== *** ENTER 0 FOR MAIN MENU *** ===============================");
                    System.out.print("=>");
                    menuchoice = sc.nextInt();
                    break;
                case 4:
                    System.out.println("----LIST OF MLA'S---- \n\n"+MLA_leaders);
//                    System.out.println("=============================== *** ENTER 10 TO FOR MAIN MENU *** ===============================");
                    System.out.println("=============================== *** ENTER 0 FOR MAIN MENU *** ===============================");
                    System.out.print("=>");
                    menuchoice = sc.nextInt();
                    break;
                case 5:
                    System.out.println("SECRETARY IS "+Secretary);
//                    System.out.println("=============================== *** ENTER 10 TO FOR MAIN MENU *** ===============================");
                    System.out.println("=============================== *** ENTER 0 FOR MAIN MENU *** ===============================");
                    System.out.print("=>");
                    menuchoice = sc.nextInt();
                    break;
                case 6:
                    System.out.println("----RTI OFFICERS ARE---- \n\n"+RTI_officers);
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
