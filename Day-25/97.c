#include <stdio.h>
int main() 
{
    int sz1, sz2;
    printf("Enter size of first array: ");
    scanf("%d", &sz1);
    int num1[sz1];
    printf("Enter elements of first sorted array:\n");
    for(int i=0; i<sz1; i++) 
    {
        scanf("%d", &num1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &sz2);
    int num2[sz2];
    printf("Enter elements of second sorted array:\n");
    for(int i=0; i<sz2; i++) 
    {
        scanf("%d", &num2[i]);
    }
    int sz=sz1+sz2;
    int num[sz];
int i = 0, j = 0, k = 0;

while (i < sz1 && j < sz2) 
{
    if (num1[i] <= num2[j]) 
    {
        num[k++] = num1[i++];
    } else 
    {
        num[k++] = num2[j++];
    }
}
while(i < sz1) 
  num[k++] = num1[i++];
while (j < sz2) 
  num[k++] = num2[j++];
  printf("The merged array is :");
  for(int k=0;k<sz;k++)
  {
    printf("%d ",num[k]);
  }
  return 0;
}