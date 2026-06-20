#include<stdio.h>
#include<string.h>
int main()
{
    char name[200];
    printf("Enter the sentence:");
    fgets(name , sizeof(name),stdin);
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
        if(repeat==0)
        {
            printf("The first Non-repeating character is: %c",name[i]);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("All characters are repeating");
        
    }

    return 0;
}