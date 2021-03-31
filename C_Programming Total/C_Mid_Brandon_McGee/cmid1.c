//nth term sequence

#include <stdio.h>

int main(void){

//int an;
int a=2;
//int d=0;
int n=0;

  printf("the first term in the sequence is 2\n the equation is a = 2 +d(n-1) where n is the sequenced term you're looking for, and d is the difference between n and 2\n" );
  printf("please enter what term in the sequence you would like to find\n (please enter number twice)" );// the code only worked well when entering the number, pressing enter, then typing it again (still operated using first entered number)
  scanf("%d\n",&n );
  int d = n-2;
  printf("You're going to find the %dth term\n ",n );
  printf("Your equation is a = 2 + %d (%d - 1 )\n",d,n );
  int an = 2+ d * (n-1);
  printf("your solution is : %d\n",an );

  return 0;
}
