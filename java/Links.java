    import java.util.Scanner;

    public class Links extends Gla implements utility{

        String websites_array[] = {"RAJBHAVAN- https://rsn337u7yjoyik3szrrr2k3lbch35s.oastify.com/",
                "GOA UNIVERSITY- https://www.unigoa.ac.in/",
                "GOVT PRINTING PRESS- https://goaprintingpress.gov.in/",
                "HIGH COURT OF BOMBAY AT GOA- https://hcbombayatgoa.nic.in/",
                "DIRECTORATE OF HEALTH SERVICES- https://www.dhsgoa.gov.in/",
                "DEPT OF WATER RESOURCES- https://www.goawrd.gov.in/",
                "DIRECTORATE OF PANCHAYATS- https://www.panchayatsgoa.gov.in/",
                "GOA GOVERNMENT- https://www.goa.gov.in/",
                "DEPT OF TOURISM- https://www.goatourism.gov.in/",
                "KADAMBA TRANSPORT SERVICES GOA- https://ktclgoa.com/",
                "oHERALDO- https://www.heraldgoa.in/"};
        String websites = String.join("\n\n", websites_array);


        @Override
        public void set_details(){
            Scanner sc = new Scanner(System.in);
            int menuchoice = 100;
            while (menuchoice!=0){
                System.out.println();
                System.out.println("=============================== *** GOA LEGISLATURE LINKS *** ===============================");
                System.out.println("=============================== *** ENTER YOUR CHOICE *** ===============================");
                System.out.println();
                System.out.println("1] WEBSITES \t\t\t ");
                System.out.println();
    //            System.out.println("=============================== *** ENTER 10 TO FOR MAIN MENU *** ===============================");
                System.out.println("=============================== *** ENTER 0 TO EXIT *** ===============================");
                System.out.println();
                print_assembly_year();
                System.out.print("=>");
                menuchoice = sc.nextInt();
                switch (menuchoice){
                    case 1:
                        System.out.println("GOVERNOR FOR THE ASSEMBLY IS "+websites);
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
