/*alphabet pattern*/
//Alphabet pattern - type 1
/*A
  A B
  A B C
  A B C D
  A B C D E
------------------------
//Alphabet pattern - type 2
    A
    B B
    C C C
    D D D D
    E E E E E
------------------------
//Alphabet pattern - type 3
    A
    B C
    D E F
    G H I J
    K L M N O
*/

#include <stdio.h>
int main()
{
    int i,j;
    char n='A';
    for (i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",n);
            //n++;
        }
        n++;
        printf("\n");
    }
}