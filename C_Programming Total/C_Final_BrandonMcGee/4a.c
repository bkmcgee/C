
#include <stdio.h>
#include <math.h>
int main()
{
double a,b,c;
double d;
double rt1,rt2;
printf("\n::::::Question 4:::::\n" );
printf("Enter constant a: ");
scanf("%lf",&a);
printf("Enter constant b: ");
scanf("%lf",&b);
printf("Enter constant c: ");
scanf("%lf",&c);
printf("\n");
if(a==0 && b==0)
printf("No solution\n");
else if(a==0)
{
printf("Your equation only has one root:: %.2lf\n",(-1)*c/b);
}
else
{
d= (b*b)-(4*a*c);
if(d<0){printf("Your equation has complex roots\n");
}
else
{
x1=(((-1)*b)+sqrt(d))/(2*a);
x2=(((-1)*b)-sqrt(d))/(2*a);
printf("Your equation has two distinct real roots:: %.2lf, &  %.2lf\n",rt1,rt2);
}
}
return 0;
}
