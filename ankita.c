#include<stdio.h>
int main()
{
    /*int amt;
    float t;
    printf("Enter Electric bill amount: ");
    scanf("%d",&amt);
    if(amt<800)
    {
        printf("Bill amount is less than 800, so no need to pay tax");
    }
    else if(amt<1200)
    {
        t=amt*0.1;
        printf("Tax need to pay = %f",t);
    }
    else if(amt<2000)
    {
        t=amt*0.15;
        printf("Tax need to pay = %f",t);
    }
    else
    {
        t=amt*0.22;
        printf("Tax need to pay = %f",t);
    }
    printf("\nTotal payble amount is Rs. %.2f",amt+t);*/

    /*int a;
    printf("Enter the no. = ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("EVEN No. ");
    }
    else{
        printf("ODD No.");
    }*/

    /*char x;
    printf("Enter the Alphabet = ");
    scanf("%c",&x);
    if(x=='a' && x=='A' && x=='e' && x=='E' && x=='i' && x=='I' && x=='o' && x=='O' && x=='u' && x=='U')
    {
        printf("VOWEL");
    }
    else{
        printf("CONSONANT");
    }*/

    /*char x;
    printf("Enter the Alphabet = ");
    scanf("%c",&x);
    if(x=='a' || x=='A' || x=='e' || x=='E' || x=='i' || x=='I' || x=='o' || x=='O' || x=='u' || x=='U')
    {
        printf("VOWEL");
    }
    else{
        printf("CONSONANT");
    }*/

    int amt,g;
    float c;
    printf("Enter the sales amount and grade = ");
    scanf("%d%d",&amt,&g);
    if(amt>=12000 && g>5)
    {
        c=amt*23.5/100;
    }
    else if(amt>=12000 && g<5 && g>3)
    {
        c=amt*23/100;
    }
    else if(amt<12000 && g>5)
    {
        c=amt*22.4/100;
    }
    else{
        c=amt*21.8/100;
    }
    printf("Commision is Rs. %.2f",c);
    return 0;
    
}