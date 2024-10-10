//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

//#############AUTHER: SAISH NAIK############
//#############ROLLNO: 39###############


import java.util.*;
import java.lang.*;

interface utility {
    void set_details();
}

public class Main {
    static public void main_menu() {
        System.out.println();
        System.out.println();
        System.out.println("======================= *** AUTHOR:SAISH NAIK *** =======================");
        System.out.println("======================= *** ROLLNO:39 *** =======================");
        System.out.println();
        System.out.println("======================= *** WELCOME TO GOA LEGISLATIVE ASSEMBLY PORTAL *** =======================");
        System.out.println();
        System.out.println("=============================== *** ENTER YOUR CHOICE *** ===============================");
        System.out.println();
        System.out.println("A] LEGISLATURE \t\t\t B] GOVERNMENT \t\t\t C] LINKS");
        System.out.println();
        System.out.println("D] CONTACT");
        System.out.println();
        System.out.println("=============================== *** ENTER X TO EXIT *** ===============================");
    }


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Gla Gla = new Gla();
        Legislature legislature = new Legislature();
        Government gov = new Government();
        Links links = new Links();
        Contact contact = new Contact();

        char choice = '#';

        while (choice!='X' || choice!='x'){
            main_menu();
            System.out.print("=>");
            choice = sc.next().charAt(0);
            if(choice=='A' || choice=='a'){
                legislature.set_details();
            } else if (choice=='B' || choice=='b') {
                gov.set_details();
            } else if (choice=='C' || choice=='c') {
                links.set_details();
            } else if (choice=='D' || choice=='d') {
                contact.set_details();
            } else if (choice=='X' || choice=='x') {
                System.exit(0);
            }else {
                System.out.println("ENTER VALID INPUT!!");
            }
        }


    }

}