/*  Danny Jay M. Flores (BSIT-2B)
    IT - 204
    Activity 2 - Looping Statement (Num 2 - Compute Grades)
    11/26/2021
*/
using System;

namespace Act2Num2
{
    class ComputeGrades
    {
        static void Main(string[] args)
        {
            float grade, gradeSum = 0, avg;
            for (int i = 1; i < 6; i++)
            {
                Console.Write("Enter grade: ");
                grade = Convert.ToSingle(Console.ReadLine());
                gradeSum = gradeSum + grade;
            }

            avg = gradeSum / 5;
            Console.Write("\nAverage grade is: " + avg.ToString("F"));

            if ((avg >= 75) && (avg <= 100))
            {
                Console.WriteLine("\nRemarks: PASSED");
            }
            else if (avg < 75)
            {
                Console.WriteLine("\nRemarks: FAILED");
            }
            else
            {
                Console.WriteLine("\nSorry, remarks only accepts less than or equal to 100.");
            }
            Console.ReadLine();
        }
    }
}
