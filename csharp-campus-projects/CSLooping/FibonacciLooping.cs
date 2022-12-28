/*  Danny Jay M. Flores (BSIT-2B)
*   IT - 204
*   Final Project - Case Study Looping (Num 5 - Fibonacci Sequence)
*   02/11/2022
*/
using System;

namespace CSLooping
{
    public class FibonacciSequence
    {
        public static void Main(string[] args)
        {
            int n1 = 1, n2 = 1, n3, i, length;
            Console.WriteLine("\nFIBONACCI SEQUENCE\n");
            Console.Write("Please enter length of Fibonnaci Sequence: ");
            length = Convert.ToInt32(Console.ReadLine());
            Console.Write("\n" + n1 + "  " + n2 + "  "); //prints 1 and 1
            //starts looping at index 2 then ends at desired length
            for (i = 2; i < length; i++)
            {
                n3 = n1 + n2;
                Console.Write(n3 + "  ");
                n1 = n2;
                n2 = n3;
            }
            Console.WriteLine("\n");
        }
    }
}
