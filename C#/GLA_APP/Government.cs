// Government.cs
using System;

public class Government : Gla, IUtility
{
    private string Governor = "Shri. P. S. Sreedharan Pillai";
    private string CM = "Shri. Pramod Sawant";
    private string[] COM_Array = 
    {
        "SHRI. PRAMOD SAWANT",
        "SHRI. VISHWAJIT RANE",
        "SHRI. MAUVIN GODINHO",
        "SHRI. RAVI NAIK",
        "SHRI. SUBHASH SHIRODKAR",
        "SHRI. ROHAN KHAUNTE",
        "SHRI. GOVIND GAUDE",
        "SHRI. ATANASIO MONSERRATE",
        "SHRI. RAMKRISHNA ALIAS SUDIN DHAVALIKAR",
        "SHRI. NILKANTH HALARNKAR",
        "SHRI. SUBHASH PHAL DESSAI",
        "SHRI. ALEIXO SEQUEIRA"
    };
    private string COM => string.Join("\n\n", COM_Array);

    public void SetDetails()
    {
        int menuChoice = 100;
        while (menuChoice != 0)
        {
            Console.WriteLine();
            Console.WriteLine("=============================== *** GOA GOVERNMENT DETAILS *** ===============================");
            Console.WriteLine("=============================== *** ENTER YOUR CHOICE *** ===============================");
            Console.WriteLine();
            Console.WriteLine("1] GOVERNOR \t\t\t 2] CHIEF MINISTER \t\t\t 3] COUNCIL OF MINISTERS");
            Console.WriteLine();
            Console.WriteLine("4] POLITICAL GROUPS \t\t\t");
            Console.WriteLine();
            Console.WriteLine("=============================== *** ENTER 0 TO RETURN TO MAIN MENU *** ===============================");
            Console.WriteLine();
            PrintAssemblyYear();
            Console.Write("=> ");
            menuChoice = int.Parse(Console.ReadLine());

            switch (menuChoice)
            {
                case 1:
                    Console.WriteLine($"GOVERNOR FOR THE ASSEMBLY IS {Governor}");
                    break;
                case 2:
                    Console.WriteLine($"CHIEF MINISTER OF GOA IS {CM}");
                    break;
                case 3:
                    Console.WriteLine($"COUNCIL OF MINISTERS ARE {COM}");
                    break;
                case 4:
                    Console.WriteLine($"POLITICAL GROUPS ARE \n\n{PoliticalGroups}");
                    break;
                case 0:
                    return;
                default:
                    Console.WriteLine("PLEASE ENTER VALID INPUT");
                    break;
            }
        }
    }
}
