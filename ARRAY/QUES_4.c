#include <stdio.h>
int main()
{
   int array[10], pos, c, n;

   printf("size of array \n");
   scanf("%d", &n);

   printf("Enter the elements\n");

   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   printf("postion of deletion \n");
   scanf("%d", &pos);

   if (pos >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (c = pos - 1; c < n - 1; c++)
         array[c] = array[c+1];

      printf("Resultant array:\n");

      for (c = 0; c < n - 1; c++)
         printf("%d\n", array[c]);
   }

   return 0;
}