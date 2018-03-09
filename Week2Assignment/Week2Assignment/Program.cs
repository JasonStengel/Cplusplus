using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*****************************/
/*Programmer: Jason Stengel  */
/*Date: Feburary 12, 2016    */
/*Files: Week2assignment.cs  */
/*****************************/


namespace Week2Assignment
{
    class Program
    {
        static void Main(string[] args)
        {
            //Declare variables
            int iQty = 4,
                iUnitPrice = 5,
                iOZ = 32;

            double dTAXRATE = .1,
                   TotBill;

            float fOzPrice;

            //change TotBill to equal iQty times iUnitPrice

            TotBill = iQty * iUnitPrice;

            //adds tax to TotBill
            TotBill += dTAXRATE * TotBill;
        

            //Write to console what the bill is
            Console.WriteLine("Pay us: ${0}",TotBill);

            //decrament the value of iUnitPrice
            iUnitPrice--;

            //set the vauel of fOzPrice
            fOzPrice = (float)iUnitPrice / iOZ;

            //prints the price per ounce to the console 
            Console.WriteLine("The price per ounce is: ${0}", fOzPrice);


            //keeps the console open
            Console.ReadLine();

        }
    }
}
