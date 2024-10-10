// Gla.cs
using System;

public class Gla
{
    protected int AssemblyYear = 2024;
    protected string[] PoliticalGroupsArray = 
    {
        "1. BHARATIYA JANATA PARTY(28)",
        "2. MAHARASHRAWADI GOMANTAK PARTY(2)",
        "3. INDEPENDANT(3)",
        "4. INDIAN NATIONAL CONGRESS(3)",
        "5. AAM AADMI PARTY(2)",
        "6. REVOLUTIONARY GOANS PARTY(1)"
    };

    protected string PoliticalGroups => string.Join("\n\n", PoliticalGroupsArray);

    public void PrintAssemblyYear()
    {
        Console.WriteLine($"######## NOTE: INFORMATION OF THE GOA LEGISLATURE IS UPTO THE FISCAL YEAR {AssemblyYear}. ########");
    }
}
