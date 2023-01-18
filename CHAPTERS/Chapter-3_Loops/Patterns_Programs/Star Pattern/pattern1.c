// star pattern program - half pyramid
/***
 //1st patetrn - half pyramid
 *
 * *
 * * *
 * * * *
 * * * * *
 --------------------------------------------
//2nd pattern - half pyramid - reverse
    * * * * *
    * * * *
    * * *
    * *
    *
----------------------------------------------
//3rd pattern - half pyramid
           *
         * *
       * * *
     * * * *
   * * * * *
----------------------------------------------
//4th pattern - pyramid
               *
             *   *
            *  *  *
          *  *  *  *
        *  *  *  *   *
----------------------------------------------
//5th pattern - holow  square
    * * * * *
    *       *
    *       *
    *       *
    * * * * *
----------------------------------------------

//6th pattern -

*****
 ****
  ***
   **
    *
 */

#include <stdio.h>
int main()
{
  /*6th pattern*/
  /*int i, j, k;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf(" ");
    }
    for (k = 5; k >= i; k--)
    {
      printf("*");
    }
    printf("\n");
  }*/

  //5th pattern
  /*int i, j, k;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 5; j++)
    {
      if (i == 1 || i == 5 || j == 1 || j == 5)
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }*/

  /*4th pattern*/
  /*int i, j, k;
  for (i = 1; i <= 5; i++)
  {
    for (j = 5; j >= i; j--)
    {
      printf(" ");
    }
    for (k = 1; k <= i; k++)
    {
      printf("* ");
    }
    printf("\n");
  }*/

  /*3rd pattern-half pyramid*/
  /*int i, j, k;
  for (i = 1; i <= 5; i++)
  {
    for (j = 5; j >= i; j--)
    {
      printf(" ");
    }
    for (k = 1; k <= i; k++)
    {
      printf("*");
    }
    printf("\n");
  }*/


  /*2nd pattern - half pyramid - reverse*/
  /*/int i, j, k;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf(" ");
    }
    for (k = 5; k >= i; k--)
    {
      printf("*");
    }
    printf("\n");
  }*/


  /*1st pattern*/
  /*int i, j;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }*/
  return 0;
}
