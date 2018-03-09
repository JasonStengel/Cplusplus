using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/****************************************************************/
/*Programmer: Jason Stengel                                     */
/*Date: March 20, 2017                                          */
/*Progam: fills an array with test scores and finds the average */
/*Files: Program.cs                                             */
/****************************************************************/
namespace Project4_C
{
    class Program
    {

        static void Main(string[] args)    
        {
            //array used to store variables
            int[] iTestScores = new int[5];

            //creating object of the mathClass class
            mathClass oMathClass = new mathClass();
            //passing the array into each of the methods on the mathClass class
            oMathClass.GetScores(iTestScores);
            oMathClass.FindAverage(iTestScores);
            oMathClass.ShowData(iTestScores);
            Console.ReadLine();

        }
    }
}
