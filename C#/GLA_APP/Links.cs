// Links.cs
using System;

public class Links : Gla, IUtility
{
    private string[] WebsitesArray = 
    {
        "RAJBHAVAN- https://rsn337u7yjoyik3szrrr2k3lbch35s.oastify.com/",
        "GOA UNIVERSITY- https://www.unigoa.ac.in/",
        "GOVT PRINTING PRESS- https://goaprintingpress.gov.in/",
        "HIGH COURT OF BOMBAY AT GOA- https://hcbombayatgoa.nic.in/",
        "DIRECTORATE OF HEALTH SERVICES- https://www.dhsgoa.gov.in/",
        "DEPT OF WATER RESOURCES- https://www.goawrd.gov.in/",
        "DIRECTORATE OF PANCHAYATS- https://www.panchayatsgoa.gov.in/",
        "GOA GOVERNMENT- https://www.goa.gov.in/",
        "DEPT OF TOURISM- https://www.goatourism.gov.in/",
        "KADAMBA TRANSPORT SERVICES GOA- https://ktclgoa.com/",
        "oHERALDO- https://www.heraldgoa.in/"
    };
    private string Websites => string.Join("\n\n", WebsitesArray);

    public void SetDetails()
    {
        int menuChoice = 100;
        while (menuChoice != 0)
        {
            Console.WriteLine();
            Console.WriteLine("=============================== *** GOA LEGISLATURE LINKS *** ===============================");
            Console.WriteLine("=============================== *** ENTER YOUR CHOICE *** ===============================");
            Console.WriteLine();
            Console.WriteLine("1] WEBSITES");
            Console.WriteLine();
            Console.WriteLine("=============================== *** ENTER 0 TO RETURN TO MAIN MENU *** ===============================");
            Console.WriteLine();
            PrintAssemblyYear();
            Console.Write("=> ");
            menuChoice = int.Parse(Console.ReadLine());

            if (menuChoice == 1)
            {
                Console.WriteLine("WEBSITES ARE:\n\n" + Websites);
            }
            else if (menuChoice == 0)
            {
                return;
            }
            else
            {
                Console.WriteLine("PLEASE ENTER VALID INPUT");
            }
        }
    }
}
