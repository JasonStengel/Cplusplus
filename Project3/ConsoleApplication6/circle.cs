using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication6
{
    class circle
    {
        //variables
        private Double dArea = 0.0,
                dDiameter = 0.0,
                dCircumference = 0.0,
                iRadius = 0;
        private const double PI = 3.14159;

        public circle()
        {
            iRadius = 0;
        }
        //method to get the radius from the program class
        public circle(double Radius)
        {
            iRadius = Radius;
        }
        //calls each of the math methods 
        public void dCircle()
        {
            getArea();
            getCircumference();
            geDiameter();
            Console.WriteLine("Area:{0:0.###}\n", dArea);
            Console.WriteLine("Circumference:{0:0.###}\n", dCircumference);
            Console.WriteLine("Diameter:{0:0.###}\n", dDiameter);
            Console.ReadLine();
            return;
        }
        //method to get the area of the circle        
        public void getArea()
        {
            dArea = PI * (iRadius * iRadius);
        }
        //method to get the diameter of the circle
        public void geDiameter()
        {
            dDiameter = iRadius * 2;
            return;
        }
        //method to get the circumference of the circle
        public void getCircumference()
        {
            dCircumference = 2 * PI * iRadius;
        }
    }//circle class
}
