#include <stdio.h>

void pswap (float *pa, float *pb)
{
	float temp = *pa;
	*pa = *pb;
	*pb = temp;
	return;
}
int main ()
{
	float a ;
	float b ;
	float *pa = &a;
	float *pb = &b;
	printf("please enter two floats\n" );
  scanf("%f\n",&*pa );
	//printf("%s\n", );
//  printf("please enter another float\n" );
  scanf("%f\n",&*pb );
  printf("Great choice of floats\n" );
	printf ("a: %f, b: %f\n", a, b);
	pswap (pa, pb);
	printf ("a: %f, b: %f\n", a, b);
	return 0;
}
