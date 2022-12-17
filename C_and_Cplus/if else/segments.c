/*  Flores, Danny Jay M.
    BSIT-1B
    Unit 3 Lesson 1
    Trace the output of each program segment.
*/
#include <stdio.h>

int main()
{
    //1st segment
    {
        int x=6, y=10;
        if (x<=5) 
        {
            y+=2;
        }
        else 
        {
            y++;
        }
        printf("y=%d", y);
    }
    //2nd segment
    {
        int x=6, y=10, z=0;
        if (y + x > 10)
        {
            z = x + 5;
        }
        else
        {
            z = y + 10;
        }
        printf("\nz=%d", z);
    }
    //3rd segment
    {
        int x=4, y=10;
        if (x<=5)
        { 
            if (y<10)
            y+=2;
        }
        else
        {
            y++;
        }
        printf("\ny=%d", y);
    }
    //4th segment
    {
        int x=6, y=10, z=0;
        if (x<10)
        {
            if (y>10)
            {
                z+=2;
            }
            else
            {
                z+=4;
            }
        z+=6;
        }
        else
        {
            z = y + 10;
        }
        printf("\nz=%d", z);
    }
    return 0;
}