
#include <stdio.h>
#include <math.h>
void compute(int);
int main()
{
  int x;
printf("Enter the value of x \n");
scanf("%d",&x);
compute(x);
}
void compute(int x)
{
float a, b;
float c;
a= 2*(x*x);
b= x*log(x);
c=a-b;
printf(" The value of f(%d) is %f",x,c);

}
