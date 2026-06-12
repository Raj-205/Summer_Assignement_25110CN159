#include<stdio.h>
int main()
{
     int sz,step;
    printf("Enter the size of Array:");
    scanf("%d",&sz);
    int num[sz];
    printf("Enter the Array Element \n");
    for(int i=0;i<sz;i++)
    {
        scanf("%d",&num[i]);
    }
    int idex=0;
    for(int i=0;i<sz;i++)
    {
         if(num[i] != 0) {
            int temp = num[i];
            num[i] = num[idex];
            num[idex] = temp;
            idex++;
        }

    }
    printf("The updated Array is :");
    for(int i=0;i<sz;i++)
    {
        printf("%d,", num[i]);
    }
    return 0;
}