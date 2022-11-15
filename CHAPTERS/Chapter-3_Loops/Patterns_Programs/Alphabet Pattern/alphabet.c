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
    //Alphabet pattern - type 1
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", 64 + j);
        }
        printf("%c", 10);//new line
    }
    //Alphabet pattern - type 3
    int i, j, k = 1;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", 64 + k);
            k++;
        }
        printf("%c", 10);//new line
    }

    //Alphabet pattern - type 2
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", 64 + i);
        }
        printf("%c", 10);//new line
    }
        
}