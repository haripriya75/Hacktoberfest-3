//This program is to print a pascal triangle
#include <stdio.h>
int main()
{
   int rows, co = 1, space, i, j;
   printf("Enter the number of rows: ");
   scanf("%d", &rows); //Add number of rows
   for (i = 0; i < rows; i++)
   {
      for (space = 1; space <= rows - i; space++)
         printf("  ");
      for (j = 0; j <= i; j++)
      {
         if (j == 0 || i == 0)
            co = 1;
         else
            co = co * (i - j + 1) / j;
         printf("%4d", co);
      }
      printf("\n");
   }
   return 0;
}
