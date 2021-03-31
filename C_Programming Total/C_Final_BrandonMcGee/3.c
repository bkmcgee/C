#include <stdio.h>
#include <math.h>
long long con(int num);

int main()
{
    int num;
    printf("\n::::::Question 3:::::\n" );
    printf("Please input a number on the interval [0,255]: ");
    scanf("%d", &num);
    printf("%d in decimal = %lld in binary\n", num, con(num));
    return 0;
}

long long con(int num)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = num%2;
        //printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, remainder, n/2);
        num /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
