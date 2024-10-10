from utility import Utility
from gla import Gla
import sys

class Contact(Gla, Utility):
    def general_contact(self):
        print("Goa Legislature Secretariat:")
        print("Assembly Complex - Alto Porvorim Goa Pin 403521.")
        print("Tel No: 0832-2493315")
        print("Fax: 91-0832 -2411054")
        print("Direct No: 0832 - 2410917")
        print("Email: sec-leg.goa@nic.in")
    
    def secretary_office(self):
        contact_data = [
            ["Perpetual Theresa Fernandes", "Reporter & P.A. to Secretary", "R. No S201, 2nd Floor Goa Legislature Secretariat Porvorim Bardez Goa", "832-2493315, 2410917", "08322411054", ""],
            ["Chaitanya Joshi", "PA to Secretary", "R. No S201, 2nd Floor Goa Legislature Secretariat Porvorim Bardez Goa", "832-2493315", "", ""],
            # ... (all other contacts)
        ]
        
        for i, contact in enumerate(contact_data):
            print(f"Contact {i + 1}")
            print(f"Name: {contact[0]}")
            print(f"Designation: {contact[1]}")
            print(f"Address: {contact[2]}")
            print(f"Phone Number: {contact[3]}")
            print(f"Fax: {contact[4]}")
            print(f"Email: {contact[5]}")
            print()
    
    def legislation_branch(self):
        contact_data = [
            ["Farida Muzawar", "1st Floor, Goa Legislature Secretariat Porvorim Bardez Goa", "Section Officer", "08322-493244, 2413830"],
            ["Shewta Naik", "1st Floor, Goa Legislature Secretariat Porvorim Bardez Goa", "Senior Assistant", "08322-493244, 2413830"],
            # ... (all other contacts)
        ]
        
        for i, contact in enumerate(contact_data):
            print(f"Contact {i + 1}")
            print(f"Name: {contact[0]}")
            print(f"Address: {contact[1]}")
            print(f"Designation: {contact[2]}")
            print(f"Phone Number: {contact[3]}")
            print()

    def set_details(self):
        while True:
            print()
            print("=============================== *** GOA LEGISLATURE CONTACT *** ===============================")
            print("=============================== *** ENTER YOUR CHOICE *** ===============================")
            print()
            print("1] GENERAL CONTACT DETAILS \t\t\t 2] SECRETARY'S OFFICE \t\t\t 3] LEGISLATION BRANCH ")
            print()
            print("=============================== *** ENTER 0 TO EXIT *** ===============================")
            print()
            self.print_assembly_year()
            choice = int(input("=> ").strip())
            if choice == 1:
                print("GENERAL CONTACT DETAILS:")
                self.general_contact()
                print("=============================== *** ENTER 0 FOR MAIN MENU *** ===============================")
            elif choice == 2:
                print("SECRETARY'S OFFICE: ")
                self.secretary_office()
            elif choice == 3:
                print("LEGISLATION BRANCH")
                self.legislation_branch()
            elif choice == 0:
                sys.exit()
            else:
                print("PLEASE ENTER VALID INPUT")
