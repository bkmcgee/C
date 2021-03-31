#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
/////attempt 2 at April 19 question 2

typedef struct Complex
{
  double real;
  double imag;
} Complex;
Complex add(Complex a,Complex b)
{
  Complex sum;
  sum.real = a.real + b.real;
  sum.imag = a.imag + b.imag;
  return sum;
}
Complex sub(Complex a,Complex b)
{
  Complex diff;
  diff.real = a.real - b.real;
  diff.imag = a.imag - b.imag;
  return diff;
}
Complex conju(Complex a)
{
  Complex temp;
  temp.real = a.real;
  temp.imag = -1*a.imag;
  return temp;
}
Complex mult(Complex x, Complex y)
{
  Complex mul;
  mul.real = x.real * y.real- x.imag * y.imag;
  mul.imag = x.real * y.imag + x.imag * y.real;
  return mul;
}
Complex divide(Complex x,Complex y)
{
  Complex z;
  z.real = (x.real*y.real + x.imag*y.imag)/(y.real*y.real+y.imag*y.imag);
  z.imag = (x.imag*y.real - x.real*y.imag)/(y.real*y.real + y.imag*y.imag);
  return z;
}
double abso(Complex a)
{
  double ans = pow(a.real*a.real+a.imag*a.imag,0.5);
  return ans;
}
void print(Complex z)
{
  char complex[20];
  char real[10],imag[10];
  snprintf(real, 10, "%lf", z.real);
  snprintf(imag, 10, "%lf", z.imag);
  if(z.imag>=0)
  strcat(real,"+");
  strcpy(complex,real);
  strcat(complex,imag);
  strcat(complex,"i");
  printf("%s\n",complex);
}
///////////////main
int main()
{
  Complex z,w;
  printf("For 1st complex number \n");
  printf("Enter real part : ");
  scanf("%lf", &z.real);
  printf("Enter imaginary part : ");
  scanf("%lf", &z.imag);
  printf("For 2nd complex number \n");
  printf("Enter real part : ");
  scanf("%lf", &w.real);
  printf("Enter imaginary part : ");
  scanf("%lf", &w.imag);
  Complex res = add(z,w);
  printf("z+w = ");
  print(res);
  printf("z-w = ");
  res = sub(z,w);
  print(res);
  printf("zw = ");
  res = mult(z,w);
  print(res);
  printf("z/w = ");
  res = divide(z,w);
  print(res);
  printf("Conjugate of z = ");
  res= conju(z);
  print(res);
  printf("Absolute value of z = %lf\n",abso(z));
  return 0;////end
}
