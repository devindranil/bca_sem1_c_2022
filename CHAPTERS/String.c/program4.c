//program to concatenate two strings

#include<stdio.h>
#include<string.h>
int main()
{
    
    char str1[30],str2[30];
    int l1,l2,i;
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    /*strcat(destination,source)*/
    /*strcat(str2,str1);
    printf("string=%s ",str2);*/
    //MANUALLY 
    l1=strlen(str1);
    l2=strlen(str2);

    for(i=0;i<=l1;i++)
    {
        str2[l2+i]=str1[i];
    }
    printf("%s",str2);
    return 0;
} 