#include <stdio.h>
#include <math.h>

int main()
{
   int b, x, y;
   double a;

   printf("Введіть x: ");
   scanf("%d", &x);

   printf("Введіть y: ");
   scanf("%d", &y);

   printf("Введіть b: ");
   scanf("%d", &b);

   if (b < 0)
      a = b + sqrt(x - 4 * y);
   else if (b > 7)
    a = (b * y) / (2 * y - 3 * x);
   else if (b == 0)
   a = (b * b) - (2 * x * y) + 4 / (b * b - x * y);
      
   printf("a = %.2f\n", a);
   return 0;
}
