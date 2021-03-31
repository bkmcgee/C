#include <stdio.h>

float max(float a, float b, float c);
int main(void){
 float i, j, k;
 printf("Enter grades: ");
 scanf("%f%f%f", &i, &j, &k);
 printf("Highest grade = %.2f\n", max(i, j,
k));
 return 0;}
float max(float a, float b, float c){
 if(a >= b && a >= c)
 return a;
 else if(b > a && b > c)
 return b;
 else
 return c;}
