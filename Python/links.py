from utility import Utility
from gla import Gla
import sys

class Links(Gla, Utility):
    def __init__(self):
        super().__init__()
        self.websites_array = [
            "RAJBHAVAN- https://rsn337u7yjoyik3szrrr2k3lbch35s.oastify.com/",
            "GOA UNIVERSITY- https://www.unigoa.ac.in/",
            # ... (all other websites)
            "oHERALDO- https://www.heraldgoa.in/"
        ]
        self.websites = "\n\n".join(self.websites_array)

    def set_details(self):
        while True:
            print()
            print("=============================== *** GOA LEGISLATURE LINKS *** ===============================")
            print("=============================== *** ENTER YOUR CHOICE *** ===============================")
            print()
            print("1] WEBSITES \t\t\t ")
            print()
            print("=============================== *** ENTER 0 TO EXIT *** ===============================")
            print()
            self.print_assembly_year()
            choice = int(input("=> ").strip())
            if choice == 1:
                print(f"WEBLINKS:\n\n{self.websites}")
                print("=============================== *** ENTER 0 FOR MAIN MENU *** ===============================")
            elif choice == 0:
                sys.exit()
            else:
                print("PLEASE ENTER VALID INPUT")
