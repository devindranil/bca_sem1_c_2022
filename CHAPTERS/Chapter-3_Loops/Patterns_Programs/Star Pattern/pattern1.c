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

/*#include <stdio.h>
int main()
{
  int i, j;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 5; j++)
    {
      //(i+j)<=5
      if(i==1 || i==5 || j==1 || j==5)
      {
        printf("*");

      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}*/

#include <stdio.h>
int main()
{
  //program to print 6th pattern
  
  //program to print mirror right triangle
  int i, j;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 5; j++)
    {
      if (j >= i)
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }


  
  return 0;
}
