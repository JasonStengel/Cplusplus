using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Project2
{
    class Program
    {
        static void Main(string[] args)
        {
//variables
            String sName = "",
                sClassName = "";          
            int iCreditHours = 0;
            double dTotalCredits = 0;
            double dCreditPoints = 0,
                   dGPA = 0;
            Boolean bContinue = true;
//asks user for the students name
            Console.WriteLine("What is the Students Name?");
            sName = Convert.ToString(Console.ReadLine());

            //while statement to continue asking questions till user signals stop
            while (bContinue)
            {
                //questions asked within the while loop
                Console.WriteLine("What is the name of the Class?");
                sClassName = Convert.ToString(Console.ReadLine());

                Console.WriteLine("How many units is the class?");
                iCreditHours = Convert.ToInt32(Console.ReadLine());
                dTotalCredits = dTotalCredits + (double)iCreditHours;

                Console.WriteLine("What grade did they recieve?");
                //local variable for the switch statement           
                char cGrade = Convert.ToChar(System.Console.ReadLine());

                //switch statement to do math to get appropriate credit points
                switch (cGrade)
                {

                    case 'a':
                        {
                            dCreditPoints = dCreditPoints + ((double)iCreditHours * 4.0);
                            break;
                        }
                    case 'b':
                        {
                            dCreditPoints = dCreditPoints + ((double)iCreditHours * 3.0);
                            break;
                        }
                    case 'c':
                        {
                            dCreditPoints = dCreditPoints + ((double)iCreditHours * 2.0);
                            break;
                        }
                    case 'd':
                        {
                            dCreditPoints = dCreditPoints + ((double)iCreditHours * 1.0);
                            break;
                        }
                    case 'f':
                        {
                            dCreditPoints = dCreditPoints + ((double)iCreditHours * 0);
                            break;
                        }
                }//switch

                //control question for the while loop
                String boolvalue = "";
                Console.WriteLine("Do you have any more classes to record? type y or n");
                boolvalue = Console.ReadLine();
                if (boolvalue.Equals("y"))
                {
                    bContinue = true;
                }//if 

                else if (boolvalue.Equals("n")){
                    bContinue = false;
                }//else if
                                  
            }//while
            dGPA = dCreditPoints / dTotalCredits;
//prints to the screen the students GPA
            Console.WriteLine("{0}'s"+" GPA for the year is {1:0.00}",sName, dGPA);
            Console.ReadLine();
    }//main
  }//class
}//namespace

