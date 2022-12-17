#include <iostream>

using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int num;

    cout << "Enter a number to calculate the factorial of: ";
    cin >> num;
    cout << "The factorial of " << num << " is " << fact(num) << endl;
}
/* Further info - https://youtu.be/k0bb7UYy0pY */