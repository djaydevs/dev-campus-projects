/*  Danny Jay M. Flores (BSIT-2B)
*   IT - 204
*   Final Project - Case Study Sequential (Num 3 - Convert Pounds to Grams)
*   02/11/2022
*/
using System;

namespace CSSequential
{
    class PoundsToGrams
    {
        static void Main(String[] args)
        {
            float pounds, grams = 454;
            Console.WriteLine("\nCONVERT POUNDS TO GRAMS\n");
            Console.Write("Please enter weight(in pounds): ");
            pounds = Convert.ToSingle(Console.ReadLine());

            Console.WriteLine("\nPounds: " + pounds);
            grams *= pounds; //calculate pounds to grams
            Console.WriteLine("Grams: " + grams.ToString("F"));
        }
    }
}
