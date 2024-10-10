import java.util.Scanner;

public class Contact extends Gla implements utility{

    public void GeneralContact(){
        System.out.println("Goa Legislature Secretariat:");
        System.out.println("Assembly Complex - Alto Porvorim Goa Pin 403521.");
        System.out.println("Tel No: 0832-2493315");
        System.out.println("Fax: 91-0832 -2411054");
        System.out.println("Direct No: 0832 - 2410917");
        System.out.println("Email: sec-leg.goa@nic.in");
    }

    public void Secretarys_office(){
        String[][] contactData = {
                {"Perpetual Theresa Fernandes", "Reporter & P.A. to Secretary", "R. No S201, 2nd Floor Goa Legislature Secretariat Porvorim Bardez Goa", "832-2493315, 2410917", "08322411054", ""},
                {"Chaitanya Joshi", "St. Grade II", "R. No S201, 2nd Floor Goa Legislature Secretariat Porvorim Bardez Goa", "0832-2493315", "", ""},
                {"Timothy Quadros", "MTS", "R. No S201, 2nd Floor Goa Legislature Secretariat Porvorim Bardez Goa", "832-2493315", "", ""},
                {"Rahul Bale", "MTS", "R. No S201, 2nd Floor Goa Legislature Secretariat Porvorim Bardez Goa", "0832-2493315", "", ""}
        };

        // Accessing and printing the contact information
        for (int i = 0; i < contactData.length; i++) {
            System.out.println("Contact " + (i + 1));
            System.out.println("Name: " + contactData[i][0]);
            System.out.println("Designation: " + contactData[i][1]);
            System.out.println("Address: " + contactData[i][2]);
            System.out.println("Phone Number: " + contactData[i][3]);
            System.out.println("Fax: " + contactData[i][4]);
            System.out.println("Email: " + contactData[i][5]);
            System.out.println();
        }
    }

    public void legislation_branch(){
        String[][] contactData = {
                {"Farida Muzawar", "1st Floor, Goa Legislature Secretariat Porvorim Bardez Goa", "Section Officer", "08322-493244, 2413830"},
                {"Shewta Naik", "1st Floor, Goa Legislature Secretariat Porvorim Bardez Goa", "Senior Assistant", "08322-493244, 2413830"},
                {"Patricia Machado", "1st Floor, Goa Legislature Secretariat Porvorim Bardez Goa", "Assistant", "08322-493244, 2413830"},
                {"Nivedita Munj", "1st Floor, Goa Legislature Secretariat Porvorim Bardez Goa", "Junior Assistant", "08322-493244, 2413830"},
                {"Tulshidas Vengurlekar", "R. No. S116 First Floor Goa Legislature Secretariat Porvorim Bardez Goa", "MTS", "08322493244, 0832-2413830"},
                {"Laxmi Naik", "R. No. S116 First Floor Goa Legislature Secretariat Porvorim Bardez Goa", "MTS", "08322493244, 0832-2413830"}
        };

        // Displaying the contact details
        for (int i = 0; i < contactData.length; i++) {
            System.out.println("Contact " + (i + 1));
            System.out.println("Name: " + contactData[i][0]);
            System.out.println("Address: " + contactData[i][1]);
            System.out.println("Designation: " + contactData[i][2]);
            System.out.println("Phone Number: " + contactData[i][3]);
            System.out.println();
        }
    }

    @Override
    public void set_details(){
        Scanner sc = new Scanner(System.in);
        int menuchoice = 100;
        while (menuchoice!=0){
            System.out.println();
            System.out.println("=============================== *** GOA LEGISLATURE CONTACT *** ===============================");
            System.out.println("=============================== *** ENTER YOUR CHOICE *** ===============================");
            System.out.println();
            System.out.println("1] GENERAL CONTACT DETAILS \t\t\t 2] SECRETARY'S OFFICE \t\t\t 3] LEGISLATION BRANCH ");
            System.out.println();
//            System.out.println("=============================== *** ENTER 10 TO FOR MAIN MENU *** ===============================");
            System.out.println("=============================== *** ENTER 0 TO EXIT *** ===============================");
            System.out.println();
            print_assembly_year();
            System.out.print("=>");
            menuchoice = sc.nextInt();
            switch (menuchoice){
                case 1:
                    System.out.println("GENERAL CONTACT DETAILS:");
                    GeneralContact();
//                    System.out.println("=============================== *** ENTER 10 TO FOR MAIN MENU *** ===============================");
                    System.out.println("=============================== *** ENTER 0 FOR MAIN MENU *** ===============================");
                    System.out.print("=>");
                    menuchoice = sc.nextInt();
                    break;
                case 2:
                    System.out.println("SECRETARY'S OFFICE: ");
                    Secretarys_office();
                    break;
                case 3:
                    System.out.println("LEGISLATION BRANCH");
                    legislation_branch();
                    break;
                case 0:
                    System.exit(0);
                default:
                    System.out.println("PLEASE ENTER VALID INPUT");
            }
        }
    }
}
