using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*****************************/
/*Programmer: Jason Stengel  */
/*Date: Feburary 12, 2016    */
/*Progam: Example Flight Calc*/
/*Files: Program.cs          */
/*****************************/

namespace FlightCalculator
{
    class Program
    {
        static void Main(string[] args)
        {
            //Declare a interger variable and initalize the value
            int numPlanes = 9;

            //decalre a double variable and initalize the value
            double gasGallons = 159.3;

            //declare a variable to hold the calculation
            double totalGallons = numPlanes * gasGallons;

            //declare a string to hold the messege
            string fuelStatement = "The total fuel needed is: {0}";

            //display the calculated value
            Console.WriteLine(fuelStatement, totalGallons);

            //hold the console window open
            Console.ReadLine();


        }
    }
}
