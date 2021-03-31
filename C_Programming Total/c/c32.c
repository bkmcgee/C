#include <stdio.h>
int main(void)
{
   int **p1, **p2, *p3, *p4, i, num, times;
   p3 = &num;
   p4 = &times;
   p1 = &p3;
   p2 = &p4;
   **p2 = 0;
   printf("Start entering integers: enter 0 to exit\n" );
   while(1) {
       scanf("%d", *p1);
       **p2 += **p1;
       if(**p1 == 0) {
           break;
       }
       while(**p1 > 0) {
           printf("exam\n");
              fflush(stdout);
           **p1 -= 1;
       }
       printf("\n");
       fflush(stdout);
   }
   printf("Total number of words = %d\n", **p2);
   return 0;
}
