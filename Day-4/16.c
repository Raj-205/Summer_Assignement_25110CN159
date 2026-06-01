#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, rem, count, armstrong, i;
    printf("Enter the first term of the range: ");
    scanf("%d", &a);
    printf("Enter the last term of the range: ");
    scanf("%d", &b);

    for(i = a; i <= b; i++)
    {
        int x = i;
        count = 0;
        armstrong = 0;

       
        while(x > 0)
        {
            x = x / 10;
            count++;
        }

        x = i;
        
        while(x > 0)
        {
            rem = x % 10;
            armstrong += (int)pow(rem, count);
            x = x / 10;
        }

        if(i == armstrong && i>9)
        {
            printf("The Armstrong number is %d\n", i);
        }
    }
    return 0;
}
