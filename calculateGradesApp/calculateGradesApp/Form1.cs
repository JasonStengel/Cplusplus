/**************************************************************/
/*Programmer: Jason Stengel                                   */
/*Date: May 20, 2017                                          */
/*Progam: calculates a students grades taken from a txt file  */
/*Files: Program.cs                                           */
/**************************************************************/

using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace calculateGradesApp
{
    public partial class Form1 : Form
    {

        private int[] GradeArray = new int[9];
        int[] grades = new int[8];

        public Form1()
        {
            InitializeComponent();
        }
        //declaring a struct
        public struct Students {
           public String name;
           public String className;
           public String Semester;
           public String Pictue;
           
        }
        public void openToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.lstGrades.Items.Clear();
            this.lblFinalGrade.Text = "";
            this.ofdg1.InitialDirectory = Application.StartupPath;
            this.ofdg1.Filter = "Text Files|*.txt";
            DialogResult dialogResult = this.ofdg1.ShowDialog();
            try
            {
                if (dialogResult != DialogResult.Cancel)
                {
                    StreamReader streamReader = new StreamReader(this.ofdg1.FileName);
                    string text = streamReader.ReadLine();
                    string[] array = text.Split(new char[]{','});

                    this.lblName.Text = array[0].ToString();
                    this.lblClassName.Text = array[1].ToString();
                    this.lblSemester.Text = array[2].ToString();
                    this.picStudentPicture.Image = Image.FromFile(Application.StartupPath + "//" + array[3].Trim());

                    for (int y = 4; y < 12; y++)
                    {
                        this.GradeArray[y-4] = (int)Convert.ToInt16(array[y]);
                    }
                    this.LoadLabels(this.GradeArray);
                    streamReader.Close();
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message, "Error Loading");
            }     
        }

        private void LoadLabels(int[] theGrades)
        {
            for (int i = 0; i < 6; i++)
            {
                this.lstGrades.Items.Add("Project " + (i + 1).ToString() + "\t" + this.GradeArray[i].ToString());
            }
            this.lstGrades.Items.Add("Midterm \t" + theGrades[6].ToString());
            this.lstGrades.Items.Add("Final \t" + theGrades[7].ToString());
        }

        private void btnCalculate_Click(object sender, EventArgs e)
        {
            double finalGrade;  
                     
                //gets the sum of the array
                int sum = 0;
                int[] gradeArray = this.GradeArray;
                for (int x = 0; x < GradeArray.Length; x++)
                {
                    sum += gradeArray[x];
                }
            if (sum == 0)
            {
                MessageBox.Show("Please pick a student from the files menu");
            }
            else
            {
                //getting the final grade
                finalGrade = sum / 8;
                lblFinalGrade.Text = finalGrade.ToString();

                //prints the letter grade to the user depending on the average percentage                   
                if (finalGrade > 89)
                {
                    lblFinalGrade.Text = "A";
                }
                if (finalGrade > 79 & finalGrade < 90)
                {
                    lblFinalGrade.Text = "B";
                }
                if (finalGrade > 69 & finalGrade < 80)
                {
                    lblFinalGrade.Text = "C";
                }
                if (finalGrade > 59 & finalGrade < 70)
                {
                    lblFinalGrade.Text = "D";
                }
                if (finalGrade < 59)
                {
                    lblFinalGrade.Text = "F";
                }
            }
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void lstGrades_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }  
}
