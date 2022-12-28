/*  Danny Jay M. Flores (BSIT-2B)
    IT - 204
    Activity 1 - Conditional Statement (Num 1 - Student Grade)
    11/05/2021
*/
using System;

namespace Act1Num1
{
    class StudentGrade
    {
        static void Main(string[] args)
        {
            int studGrade;

            Console.Write("Enter student grade: ");
            studGrade = Convert.ToInt32(Console.ReadLine());

            if ((studGrade >= 75) && (studGrade <= 100))
            {
                Console.WriteLine("\nPASSED\n");
            }
            else if (studGrade < 75)
            {
                Console.WriteLine("\nFAILED\n");
            }
            else
            {
                Console.WriteLine("\nSorry, incorrect input occurs.\n");
            }

            Console.ReadKey();
        }
    }
}