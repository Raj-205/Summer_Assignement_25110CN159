#include <stdio.h>

int main() {
    int a, b, num1, num2,temp ,LCM,gcd;

    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    num1 = a;
    num2 = b;

    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
   gcd = num1;
 LCM = (a * b) / gcd;

    printf("LCM is %d\n", LCM);

    return 0;
}