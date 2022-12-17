using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            int num1, num2, sum, prod, quo, diff;

            Console.Write("Enter first number: ");
            num1 = Convert.ToInt32(Console.ReadLine());

            Console.Write("Enter second number: ");
            num2 = Convert.ToInt32(Console.ReadLine());

            sum = num1 + num2;
            diff = num1 - num2;
            quo = num1 / num2;
            prod = num1 * num2;

            Console.WriteLine("The sum of {0} and {1} is: {2}", num1, num2, sum);
            Console.WriteLine("The difference of " + num1 + " and " + num2 + " is: " + diff);
            Console.WriteLine("The quotient of {0} and {1} is: {2}", num1, num2, quo);
            Console.WriteLine("The product of " + num1 + " and " + num2 + " is: " + prod);

            Console.ReadKey();
        }
    }
}