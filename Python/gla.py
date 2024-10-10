class Gla:
    def __init__(self):
        self.assembly_year = 2024
        self.political_groups_array = [
            "1. BHARATIYA JANATA PARTY(28)",
            "2. MAHARASHRAWADI GOMANTAK PARTY(2)",
            "3. INDEPENDANT(3)",
            "4. INDIAN NATIONAL CONGRESS(3)",
            "5. AAM AADMI PARTY(2)",
            "6. REVOLUTIONARY GOANS PARTY(1)"
        ]
        self.political_groups = "\n\n".join(self.political_groups_array)

    def print_assembly_year(self):
        print(f"######## NOTE: INFORMATION OF THE GOA LEGISLATURE IS UPTO THE FISCAL YEAR {self.assembly_year}. ########")
