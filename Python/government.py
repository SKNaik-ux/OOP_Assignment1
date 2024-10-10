from utility import Utility
from gla import Gla
import sys

class Government(Gla, Utility):
    def __init__(self):
        super().__init__()
        self.governor = "Shri. P. S. Sreedharan Pillai"
        self.cm = "Shri. Pramod Sawant"
        self.com_array = [
            "SHRI. PRAMOD SAWANT",
            "SHRI. VISHWAJIT RANE",
            # ... (all other ministers)
            "SHRI. ALEIXO SEQUEIRA"
        ]
        self.com = "\n\n".join(self.com_array)

    def set_details(self):
        menuchoice = 100
        while menuchoice != 0:
            print()
            print("=============================== *** GOA GOVERNMENT DETAILS *** ===============================")
            print("=============================== *** ENTER YOUR CHOICE *** ===============================")
            print()
            print("1] GOVERNOR \t\t\t 2] CHIEF MINISTER \t\t\t 3] COUNCIL OF MINISTERS")
            print()
            print("4] POLITICAL GROUPS \t\t\t")
            print()
            print("=============================== *** ENTER 0 TO EXIT *** ===============================")
            print()
            self.print_assembly_year()
            menuchoice = int(input("=> ").strip())

            if menuchoice == 1:
                print(f"GOVERNOR FOR THE ASSEMBLY IS {self.governor}")
            elif menuchoice == 2:
                print(f"CHIEF MINISTER OF GOA IS {self.cm}")
            elif menuchoice == 3:
                print(f"COUNCIL OF MINISTERS ARE {self.com}")
            elif menuchoice == 4:
                print(f"POLITICAL GROUPS ARE \n\n{self.political_groups}")
            elif menuchoice == 0:
                sys.exit()
            else:
                print("PLEASE ENTER VALID INPUT")
