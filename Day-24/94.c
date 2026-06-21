#include<stdio.h>
#include<string.h>
int main()
{
    char name[200], comp[400];
    printf("Enter the string for compression:");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name, "\n")] = '\0';
    int len= strlen(name);
    int pos=0;
   for (int i = 0; i < len; i++) {
        int count = 1;
        while (i + 1 < len && name[i] == name[i + 1]) {
            count++;
            i++;
        }
        comp[pos++] = name[i];
        if (count > 1) {
            int temp = count, digits[10], d = 0;
            while (temp > 0) {
                digits[d++] = temp % 10;
                temp /= 10;
            }
            for (int k = d - 1; k >= 0; k--) {
                comp[pos++] = digits[k] + '0';
            }
        }
    }
    comp[pos] = '\0';

    printf("The compressed string is: %s\n", comp);
    return 0;
}