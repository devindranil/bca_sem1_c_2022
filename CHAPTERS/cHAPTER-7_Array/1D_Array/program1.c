// wap to raed marks of 5 students and calculate total marks and average marks
#include <stdio.h>
// implement below code in a separate fucntion
void student()
{
    int marks[5];
    int sum = 0, avg = 0, i;
    printf("Enter marks of 5 students\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }
    avg = sum / 5;
    printf("Total marks = %d\n", sum);
    printf("Average marks = %d\n", avg);
    
}

int main()
{
    /*int marks[5];
    int sum = 0, avg = 0, i;
    printf("Enter marks of 5 students\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }
    avg = sum / 5;
    printf("Total marks=%d\n", sum);
    printf("Average marks=%d", avg);*/
    student();
    printf("Enter another 5 students marks\n");
    student();
    return 0;
}
