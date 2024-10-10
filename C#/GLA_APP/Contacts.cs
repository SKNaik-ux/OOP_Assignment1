// Contact.cs
using System;

public class Contact : Gla, IUtility
{
    public void GeneralContact()
    {
        Console.WriteLine("Goa Legislature Secretariat:");
        Console.WriteLine("Assembly Complex - Alto Porvorim Goa Pin 403521.");
        Console.WriteLine("Tel No: 0832-2493315");
        Console.WriteLine("Fax: 91-0832 -2411054");
        Console.WriteLine("Direct No: 0832 - 2410917");
        Console.WriteLine("Email: sec-leg.goa@nic.in");
    }

    public void SecretarysOffice()
    {
        string[,] contactData = 
        {
            { "Perpetual Theresa Fernandes", "Reporter & P.A. to Secretary", "R. No S201, 2nd Floor Goa Legislature Secretariat Porvorim Bardez Goa", "832-2493315, 2410917", "08322411054", "" },
            { "Chaitanya Joshi", "St. Grade II", "R. No S201, 2nd Floor Goa Legislature Secretariat Porvorim Bardez Goa", "0832-2493315", "", "" },
            { "Timothy Quadros", "MTS", "R. No S201, 2nd Floor Goa Legislature Secretariat Porvorim Bardez Goa", "832-2493315", "", "" },
            { "Rahul Bale", "MTS", "R. No S201, 2nd Floor Goa Legislature Secretariat Porvorim Bardez Goa", "0832-2493315", "", "" }
        };

        for (int i = 0; i < contactData.GetLength(0); i++)
        {
            Console.WriteLine($"Contact {i + 1}");
            Console.WriteLine($"Name: {contactData[i, 0]}");
            Console.WriteLine($"Designation: {contactData[i, 1]}");
            Console.WriteLine($"Address: {contactData[i, 2]}");
            Console.WriteLine($"Phone Number: {contactData[i, 3]}");
            Console.WriteLine($"Fax: {contactData[i, 4]}");
            Console.WriteLine($"Email: {contactData[i, 5]}");
            Console.WriteLine();
        }
    }

    public void LegislationBranch()
    {
        string[,] contactData = 
        {
            { "Farida Muzawar", "1st Floor, Goa Legislature Secretariat Porvorim Bardez Goa", "Section Officer", "08322-493315", "", "" },
            { "Ramesh Mhadye", "2nd Floor, Goa Legislature Secretariat Porvorim Bardez Goa", "Section Officer", "08322-493315", "", "" },
            { "Ramesh Kamat", "2nd Floor, Goa Legislature Secretariat Porvorim Bardez Goa", "Steno Grade I", "08322-493315", "", "" }
        };

        for (int i = 0; i < contactData.GetLength(0); i++)
        {
            Console.WriteLine($"Contact {i + 1}");
            Console.WriteLine($"Name: {contactData[i, 0]}");
            Console.WriteLine($"Address: {contactData[i, 1]}");
            Console.WriteLine($"Designation: {contactData[i, 2]}");
            Console.WriteLine($"Phone Number: {contactData[i, 3]}");
            Console.WriteLine($"Fax: {contactData[i, 4]}");
            Console.WriteLine($"Email: {contactData[i, 5]}");
            Console.WriteLine();
        }
    }

    public void SetDetails()
    {
        int menuChoice = 100;
        while (menuChoice != 0)
        {
            Console.WriteLine();
            Console.WriteLine("=============================== *** GOA LEGISLATURE CONTACT DETAILS *** ===============================");
            Console.WriteLine("=============================== *** ENTER YOUR CHOICE *** ===============================");
            Console.WriteLine();
            Console.WriteLine("1] GENERAL CONTACT \t\t\t 2] SECRETARY'S OFFICE \t\t\t 3] LEGISLATION BRANCH");
            Console.WriteLine();
            Console.WriteLine("=============================== *** ENTER 0 TO RETURN TO MAIN MENU *** ===============================");
            Console.WriteLine();
            PrintAssemblyYear();
            Console.Write("=> ");
            menuChoice = int.Parse(Console.ReadLine());

            switch (menuChoice)
            {
                case 1:
                    GeneralContact();
                    break;
                case 2:
                    SecretarysOffice();
                    break;
                case 3:
                    LegislationBranch();
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
