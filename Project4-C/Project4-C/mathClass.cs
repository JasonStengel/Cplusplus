using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Project4_C
{
    class mathClass
    {
        //vaiables 
       private double total = 0.00;
       private double average = 0.00;

        //method to fill the array
        public void GetScores(int[] iTestScores) {
            for (int  i = 0; i < iTestScores.Length; i++) {
                Console.WriteLine("What is the score for test #{0}?", i+1);
                iTestScores[i] = Convert.ToInt32(Console.ReadLine());
            } 
        }//getscores

        //method to get the average of the test scores
        public void FindAverage(int[] iTestScores) {       
            for (int i = 0; i < iTestScores.Length; i++) {
                total = total + iTestScores[i];
            }       
            average = total / iTestScores.Length;
        }//findaverage
        
        //method to print to the screen
        public void ShowData(int[] iTestScores) {
            System.Console.Clear();
            Console.WriteLine("");
            for (int i = 0; i < 5; i++)
            {
                Console.WriteLine("The score for test #{0} is {1}", i + 1, iTestScores[i]);
            }           
            Console.WriteLine("\nThe average for your test scores is {0:0.##}", average);          
        }//showdata
    }//class
}//namespace
