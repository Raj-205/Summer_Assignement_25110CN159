#include<stdio.h>
int main()
{
    int sz1;
    printf("Enter the size of 1 Array:");
    scanf("%d",&sz1);
    int num1[sz1];
    printf("Enter the element of 1 Array:\n");
    for(int i=0;i<sz1;i++)
    {
        scanf("%d",&num1[i]);
    } 
    int sz2;
    printf("Enter the size of 2 Array:");
    scanf("%d",&sz2);
    int num2[sz2];
    printf("Enter the element of 2 Array:\n");
    for(int i=0;i<sz2;i++)
    {
        scanf("%d",&num2[i]);
    } 
int newnum[(sz1 < sz2) ? sz1 : sz2]; 
int count = 0;
for(int i=0; i<sz1; i++) 
{
    for(int j=0; j<sz2; j++) 
    {
            if(num1[i] == num2[j]) 
            {   
                int dupli = 0;
                for(int k=0; k<count; k++) 
                {
                    if(newnum[k] == num1[i]) 
                    {
                        dupli = 1;
                        break;
                    }
                }
                if(!dupli) 
                {
                    newnum[count++] = num1[i];
                }
                break; 
            }
        }
    }
  printf("The Intersection of Arrays is: ");
    for(int i=0; i<count; i++) 
    {
        printf("%d ", newnum[i]);
    }
 return 0;
}