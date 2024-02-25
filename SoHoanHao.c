#include <stdio.h>

int main()
{
   int n, i, sum = 0;

   printf("Nhap mot so: ");
   scanf("%d", &n);

   for (i = 1; i <= n / 2; i++)
   {
      if (n % i == 0)
      {
         sum += i;
      }
   }

   if (sum == n)
   {
      printf("%d la mot so hoan hao.", n);
   }
   else
   {
      printf("%d khong phai la mot so hoan hao.", n);
   }

   return 0;
}
