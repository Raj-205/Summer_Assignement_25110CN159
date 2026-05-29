#include <stdio.h>
int main() {
    int num, reversed = 0, original;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    while (num != 0) {
        reversed = reversed * 10 + num % 10; 
        num /= 10;                     
    }
    if (original == reversed) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}