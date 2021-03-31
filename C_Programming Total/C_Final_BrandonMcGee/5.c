#include <stdio.h>

int main(void)
{
    int a,b,c,d,e,f;
    printf("\n::::::Question 5:::::\n" );

    printf("Please input an integer value for the MAC: ");
    scanf("%d", &a);
    if (a>255) {
      printf(" integer value must be on interval [0,255]: ");
      scanf("%d", &a);
    }
    printf("Please input an integer value for the MAC: ");
    scanf("%d", &b);
    if (b>255) {
      printf(" integer value must be on interval [0,255]: ");
      scanf("%d", &b);
    }
    printf("Please input an integer value for the MAC: ");
    scanf("%d", &c);
    if (c>255) {
      printf(" integer value must be on interval [0,255]: ");
      scanf("%d", &c);
    }
    printf("Please input an integer value for the MAC: ");
    scanf("%d", &d);
    if (d>255) {
      printf(" integer value must be on interval [0,255]: ");
      scanf("%d", &d);
    }
    printf("Please input an integer value for the MAC: ");
    scanf("%d", &e);
    if (e>255) {
      printf(" integer value must be on interval [0,255]: ");
      scanf("%d", &e);
    }
    printf("Please input an integer value for the MAC: ");
    scanf("%d", &f);
    if (f>255) {
      printf(" integer value must be on interval [0,255]: ");
      scanf("%d", &f);
    }
    printf("\n\nYour MAC is: %d . %d . %d . %d . %d . %d \n",a,b,c,d,e,f );

    return 0;
}
