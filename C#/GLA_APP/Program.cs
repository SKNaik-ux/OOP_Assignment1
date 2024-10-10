// AUTHER: SAISH NAIK
// ROLLNO: 39



using System;

class Program
{
    static void Main()
    {
        while (true)
        {
            Console.WriteLine();
            Console.WriteLine("======================= *** AUTHOR: SAISH NAIK *** =======================");
            Console.WriteLine("======================= *** ROLLNO: 39 *** =======================");
            Console.WriteLine();
            Console.WriteLine("======================= *** WELCOME TO GOA LEGISLATIVE ASSEMBLY PORTAL *** =======================");
            Console.WriteLine();
            Console.WriteLine("=============================== *** ENTER YOUR CHOICE *** ===============================");
            Console.WriteLine();
            Console.WriteLine("1] LEGISLATURE \t\t\t 2] GOVERNMENT \t\t\t 3] CONTACT \t\t\t 4] LINKS");
            Console.WriteLine();
            Console.WriteLine("=============================== *** ENTER 0 TO EXIT *** ===============================");
            Console.WriteLine();
            
            int choice = int.Parse(Console.ReadLine().Trim());

            switch (choice)
            {
                case 1:
                    var legislature = new Legislature();
                    legislature.SetDetails();
                    break;
                case 2:
                    var government = new Government();
                    government.SetDetails();
                    break;
                case 3:
                    var contact = new Contact();
                    contact.SetDetails();
                    break;
                case 4:
                    var links = new Links();
                    links.SetDetails();
                    break;
                case 0:
                    Environment.Exit(0);
                    break;
                default:
                    Console.WriteLine("PLEASE ENTER VALID INPUT");
                    break;
            }
        }
    }
}
