using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*************************************************/
/*Programmer: Jason Stengel                      */
/*Date: Feburary 16, 2017                        */
/*Progam: Calculates ammount of Fertilizer needed*/
/*Files: Program.cs                              */
/*************************************************/
namespace Project_1
{
    class Program
    {
        static void Main(string[] args)
        {
            //declaring the local variables
            int ilength = 0,
                iWidth = 0;                                   
            double dNitrogenNeeded,
                   dPercentNitrogen,
                   dFertilizerNeeded;      

            //gets the length of the lawn from the user
            Console.Write("What is the Length of your lawn?\n");
            ilength = Convert.ToInt32(Console.ReadLine());

            //gets the width of the lawn from the user
            Console.Write("What is the Width of your lawn?\n");
            iWidth = Convert.ToInt32(Console.ReadLine());

            //gets the percent of nitrogen per bag of fertilizer the user intends on using 
            Console.Write("What percent of Nitrogen do you intend to use?\n");
            dPercentNitrogen  = Convert.ToDouble(Console.ReadLine());
            
            //converting the nitogen to a decimal
            dPercentNitrogen = dPercentNitrogen / 100;
            //calculates the nitrogen needed
            dNitrogenNeeded = (ilength * iWidth) / 1000;
            //calculates the ammount of fertilizer needed
            dFertilizerNeeded = dNitrogenNeeded / dPercentNitrogen;

            //print to the screen the ammount of fertilizer needed
            Console.WriteLine("You need {0:0.##} pounds of fertilizer for your lawn", dFertilizerNeeded);
            Console.ReadLine();
        }
    }
}
