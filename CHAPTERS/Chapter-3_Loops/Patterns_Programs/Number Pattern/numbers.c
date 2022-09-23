/*numbers pattern*/

//Numbers pattern - type1
/*1
  1 2
  1 2 3
  1 2 3 4
  1 2 3 4 5
------------------------
//Numbers pattern - type 2
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
------------------------
//Numbers pattern - type 3
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
*/

#include <stdio.h>
int main()
{
    int i,j,n=1;
    for (i=1;i<=6;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",n);
            n++;
            
        }
        printf("\n");
    }
}