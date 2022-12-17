/*  Danny Jay M. Flores (BSIT-2B)
    IT - 204
    Activity 1 - Conditional Statement (Num 2 - Voting Age Qualification)
    11/05/2021
*/
using System;

namespace Act1Num2
{
    class AgeVote
    {
        static void Main(string[] args)
        {
            int age;

            Console.Write("Enter age: ");
            age = Convert.ToInt32(Console.ReadLine());

            if (age < 18)
            {
                Console.WriteLine("\nNot qualified to vote.\n");
            }
            else if ((age >= 18) && (age <= 100))
            {
                Console.WriteLine("\nQualified to vote.\n");
            }
            else
            {
                Console.WriteLine("\nSorry, incorrect input occurs.\n");
            }

            Console.ReadKey();
        }
    }
}