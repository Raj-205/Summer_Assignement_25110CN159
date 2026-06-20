#include<stdio.h>
#include<string.h>
int main()
{
    char name[200];
    printf("Enter the sentance:");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")] = '\0';
    int len = strlen(name);
    int found= 0;
    for(int i=0;i<len;i++)
    {
        int repeat =0;
        for(int j=0;j<len;j++)
        {   
            if( i!=j && name[i]==name[j])
            {
                repeat=1;
                break;
            }
        }
        if(repeat==1)
        {
            printf("The first repeating character is: %c",name[i]);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("No repeating characters found.");
    }
   
    return 0;
}