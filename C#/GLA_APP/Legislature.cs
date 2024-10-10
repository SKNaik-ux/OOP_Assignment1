// Legislature.cs
using System;

public class Legislature : Gla, IUtility
{
    private string Speaker = "Shri. Ramesh Tawadkar";
    private string DutySpeaker = "Shri. Joshua De Souza";
    private string OppLeader = "Shri. Yuri Alemao";
    private string[] MLA_Array = 
    {
        "SHRI. JIT AROLKAR",
    "SHRI. PRAVIN ARLEKAR",
    "SHRI. CHANDRAKANT SHETYE",
    "SHRI. NILKANTH HALARNKAR",
    "SHRI. JOSHUA DE SOUZA",
    "SMT. DELILAH LOBO",
    "SHRI. KEDAR NAIK",
    "SHRI. MICHAEL LOBO",
    "SHRI. ROHAN KHAUNTE",
    "SHRI. CARLOS FERREIRA",
    "SHRI. ATANASIO MONSERRATE",
    "SMT. JENNIFER MONSERRATE",
    "SHRI. RODOLFO FERNANDES",
    "SHRI. VIRESH BORKAR",
    "SHRI. RAJESH FALDESSAI",
    "SHRI. PREMENDRA SHET",
    "SHRI. PRAMOD SAWANT",
    "SMT. DEVIYA RANE",
    "SHRI. VISHWAJIT RANE",
    "SHRI. GOVIND GAUDE",
    "SHRI. RAVI NAIK",
    "SHRI. SUBHASH SHIRODKAR",
    "SHRI. RAMKRISHNA ALIAS SUDIN DHAVALIKAR",
    "SHRI. SANKALP AMONKAR",
    "SHRI. KRISHNA SALKAR",
    "SHRI. MAUVIN GODINHO",
    "SHRI. ANTONIO VAS",
    "SHRI. ALEIXO SEQUEIRA",
    "SHRI. ALEIXO LOURENCO",
    "SHRI. VIJAI SARDESAI",
    "SHRI. DIGAMBAR KAMAT",
    "SHRI. VENZY VIEGAS",
    "SHRI. ULHAS TUENKAR",
    "SHRI. YURI ALEMAO",
    "SHRI. CRUZ SILVA",
    "SHRI. ALTONE D’COSTA",
    "SHRI. NILESH CABRAL",
    "SHRI. GANESH GAONKAR",
    "SHRI. SUBHASH PHAL DESSAI",
    "SHRI. RAMESH TAWADKAR"
    };
    private string MLALeaders => string.Join("\n\n", MLA_Array);
    private string Secretary = "Smt. Namrata Ulman";
    private string[] RTI_Array = 
    {
        "SHRI MOHAN GAONKAR",
        "SMT N. ULMAN"
    };
    private string RTIOfficers => string.Join("\n\n", RTI_Array);

    public void SetDetails()
    {
        int menuChoice = 100;
        while (menuChoice != 0)
        {
            Console.WriteLine();
            Console.WriteLine("=============================== *** GOA LEGISLATURE DETAILS *** ===============================");
            Console.WriteLine("=============================== *** ENTER YOUR CHOICE *** ===============================");
            Console.WriteLine();
            Console.WriteLine("1] SPEAKER \t\t\t 2] DUTY SPEAKER \t\t\t 3] OPPOSITION LEADER");
            Console.WriteLine();
            Console.WriteLine("4] LIST OF MLA'S \t\t\t 5] SECRETARY \t\t\t 6] RTI OFFICERS");
            Console.WriteLine();
            Console.WriteLine("=============================== *** ENTER 0 TO RETURN TO MAIN MENU *** ===============================");
            Console.WriteLine();
            PrintAssemblyYear();
            Console.Write("=> ");
            menuChoice = int.Parse(Console.ReadLine());

            switch (menuChoice)
            {
                case 1:
                    Console.WriteLine($"SPEAKER FOR THE ASSEMBLY IS {Speaker}");
                    break;
                case 2:
                    Console.WriteLine($"DUTY SPEAKER FOR THE ASSEMBLY IS {DutySpeaker}");
                    break;
                case 3:
                    Console.WriteLine($"OPPOSITION LEADER IS {OppLeader}");
                    break;
                case 4:
                    Console.WriteLine($"----LIST OF MLA'S---- \n\n{MLALeaders}");
                    break;
                case 5:
                    Console.WriteLine($"SECRETARY IS {Secretary}");
                    break;
                case 6:
                    Console.WriteLine($"----RTI OFFICERS ARE---- \n\n{RTIOfficers}");
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
