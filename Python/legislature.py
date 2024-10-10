from utility import Utility
from gla import Gla
import sys

class Legislature(Gla, Utility):
    def __init__(self):
        super().__init__()
        self.speaker = "Shri. Ramesh Tawadkar"
        self.duty_speaker = "Shri. Joshua De Souza"
        self.oppo_leader = "Shri. Yuri Alemao"
        self.mla_array = [
            "SHRI. JIT AROLKAR",
            "SHRI. PRAVIN ARLEKAR",
            # ... (all other MLAs)
            "SHRI. RAMESH TAWADKAR"
        ]
        self.mla_leaders = "\n\n".join(self.mla_array)
        self.secretary = "Smt. Namrata Ulman"
        self.rti_array = ["SHRI MOHAN GAONKAR", "SMT N. ULMAN"]
        self.rti_officers = "\n\n".join(self.rti_array)

    def set_details(self):
        menuchoice = 100
        while menuchoice != 0:
            print()
            print("=============================== *** GOA LEGISLATURE DETAILS *** ===============================")
            print("=============================== *** ENTER YOUR CHOICE *** ===============================")
            print()
            print("1] SPEAKER \t\t\t 2] DUTY SPEAKER \t\t\t 3] OPPOSITION LEADER")
            print()
            print("4] LIST OF MLA'S \t\t\t 5] SECRETARY \t\t\t 6] RTI OFFICERS")
            print()
            print("=============================== *** ENTER 0 TO EXIT *** ===============================")
            print()
            self.print_assembly_year()
            menuchoice = int(input("=> ").strip())

            if menuchoice == 1:
                print(f"SPEAKER FOR THE ASSEMBLY IS {self.speaker}")
            elif menuchoice == 2:
                print(f"DUTY SPEAKER FOR THE ASSEMBLY IS {self.duty_speaker}")
            elif menuchoice == 3:
                print(f"OPPOSITION LEADER IS {self.oppo_leader}")
            elif menuchoice == 4:
                print(f"----LIST OF MLA'S---- \n\n{self.mla_leaders}")
            elif menuchoice == 5:
                print(f"SECRETARY IS {self.secretary}")
            elif menuchoice == 6:
                print(f"----RTI OFFICERS ARE---- \n\n{self.rti_officers}")
            elif menuchoice == 0:
                sys.exit()
            else:
                print("PLEASE ENTER VALID INPUT")
