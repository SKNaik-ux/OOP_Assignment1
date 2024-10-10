##########AUTHER: SAISH NAIK###########
##########ROLLNO: 39###########

import sys
from legislature import Legislature
from government import Government
from contact import Contact
from links import Links

def main_menu():
    print()
    print()
    print("======================= *** AUTHOR: SAISH NAIK *** =======================")
    print("======================= *** ROLLNO: 39 *** =======================")
    print()
    print("======================= *** WELCOME TO GOA LEGISLATIVE ASSEMBLY PORTAL *** =======================")
    print()
    print("=============================== *** ENTER YOUR CHOICE *** ===============================")
    print()
    print("1] LEGISLATURE \t\t\t 2] GOVERNMENT \t\t\t 3] CONTACT \t\t\t 4] LINKS")
    print()
    print("=============================== *** ENTER 0 TO EXIT *** ===============================")
    print()
    
    while True:
        choice = int(input("=> ").strip())
        if choice == 1:
            legislature = Legislature()
            legislature.set_details()
        elif choice == 2:
            government = Government()
            government.set_details()
        elif choice == 3:
            contact = Contact()
            contact.set_details()
        elif choice == 4:
            links = Links()
            links.set_details()
        elif choice == 0:
            sys.exit()
        else:
            print("PLEASE ENTER VALID INPUT")

if __name__ == "__main__":
    main_menu()
