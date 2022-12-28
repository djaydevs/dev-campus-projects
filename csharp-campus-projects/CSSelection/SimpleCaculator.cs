/*  Danny Jay M. Flores (BSIT-2B)
*   IT - 204
*   Final Project - Case Study Selection (Num 6/7 - Simple Calculator)
*   02/11/2022
*/

using System;

namespace CSSelection
{
    class SimpleCalculator
    {
        public static void Main(String[] args)
        {
            float num1, num2, choice, add, sub, multi, divi;
            Console.WriteLine("\nSIMPLE CALCULATOR\n");
            Console.Write("Please enter a number: ");
            num1 = Convert.ToSingle(Console.ReadLine());
            Console.Write("Please enter another number: ");
            num2 = Convert.ToSingle(Console.ReadLine());

            Console.WriteLine("\nOPERATIONS");
            Console.WriteLine("[1] Addition");
            Console.WriteLine("[2] Subtraction");
            Console.WriteLine("[3] Multiplication");
            Console.WriteLine("[4] Division");
            Console.Write("\nPlease enter an operator: ");
            choice = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine();
            switch (choice)
            { // using switch case for selection
                case 1:
                    Console.Write(num1 + " + " + num2 + " = ");
                    add = num1 + num2;
                    Console.Write(add.ToString("F") + "\n");
                    break;
                case 2:
                    Console.Write(num1 + " - " + num2 + " = ");
                    sub = num1 - num2;
                    Console.Write(sub.ToString("F") + "\n");
                    break;
                case 3:
                    Console.Write(num1 + " * " + num2 + " = ");
                    multi = num1 * num2;
                    Console.Write(multi.ToString("F") + "\n");
                    break;
                case 4:
                    if (num2 == 0)
                    { // 0 denominator output this message
                        Console.WriteLine("Error: Invalid Denominator");
                    }
                    else
                    {
                        Console.Write(num1 + " / " + num2 + " = ");
                        divi = num1 / num2;
                        Console.Write(divi.ToString("F") + "\n");
                    }
                    break;
                default:
                    Console.WriteLine("Calculation Error");
                    break;
            }
        }
    }
}