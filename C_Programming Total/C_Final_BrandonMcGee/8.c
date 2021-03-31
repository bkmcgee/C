#include<stdio.h>
int main()
{
 int n,k,temp,fre[9],ct=0,i;
 printf("\n::::::Question 8:::::\n" );
 printf("\n Please enter an integer (preferably long with repeating digits )\n");
 scanf("%d",&n);
 temp=n;
 for(i=0;i<10;i++)
 {
     fre[i]=0;
 }
 while(n>0)
 {
  k=n%10;
  fre[k]++;
  n/=10;
 }
 for(i=0;i<10;i++)
 {
  if(fre[i]>1)
  {
   ct=1;
   printf("%d :::: repeated %d times\n",i,fre[i]);
  }
 }
 if(ct==0)
 {
  printf("There are not ny repeated digits in your integer\n");
 }
 else
 {
   printf("Great choice of number\n" );
 }
 return 0;
}
