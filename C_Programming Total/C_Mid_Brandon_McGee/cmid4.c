#include <stdio.h>
int main(void)
{
double  k, n, m;

printf("Enter coefficients k n m : ");
scanf("%lf%lf%lf", &k, &n, &m);
double y = (-m-n)/k;
printf("the function y is %lf\n",y );
printf("y is equal to [(-%lf-%lf)/ %lf]\n",m,n,k );
}
