/*  Danny Jay M. Flores (BSIT-2B)
    IT - 204
    Activity 2 - Looping Statement (Num 1 - Number Count Loop)
    11/26/2021
*/
using System;

namespace Act2Num1
{
    class NumCountLoop
    {
        static void Main(string[] args)
        {
            float startCount, endCount;
            Console.Write("Enter start of counting: ");
            startCount = Convert.ToSingle(Console.ReadLine());
            Console.Write("Enter end of counting: ");
            endCount = Convert.ToSingle(Console.ReadLine());
            Console.WriteLine("\nOutput");

            do
            {
                Console.WriteLine(startCount);
                startCount++;
            } while (startCount <= endCount);
            Console.ReadLine();
        }
    }
}