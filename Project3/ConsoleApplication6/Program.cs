using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/****************************************************************/
/*Programmer: Jason Stengel                                     */
/*Date: March 20, 2017                                          */
/*Progam: Calculates diameter,circumference and Area of a circle*/
/*Files: Program.cs                                             */
/****************************************************************/
namespace ConsoleApplication6
{  
    class Program
    {     
        static void Main(string[] args)
        {        
            double iRadius = 0;
            //asking user for radius
            Console.WriteLine("What is the radius of the circle?");
            iRadius = Convert.ToInt32(Console.ReadLine());
            //calling  constructor to set radius to 0 
            circle oRadius1 = new circle();
            //creating object of circle class calling the constructor to pass in the radius 
            circle oRadius2 = new circle(iRadius);      
            //calling the method dCircle that does math to find diameter,area, and circumference
            oRadius2.dCircle();          
        }//main
    }//Program class    
}//namespace
