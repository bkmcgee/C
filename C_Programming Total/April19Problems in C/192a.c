#include <stdio.h>
#include <string.h>
/////attempt 2 at April 19 question 2 from lab exercise for arithmetic
int main ()
{
  char expr[300];
  int ans=0,prev=-55,data[300]={0},n,l=0,i;
  printf("Type in  Complex Equation in form :\n");
  scanf("%s",expr);
  n=strlen(expr);
  for(i=0;i<n;i++)
  {
    if(expr[i]>='0' && expr[i]<='9')
    {
      data[l]=expr[i]-'0';
      l++;
    }
    else if(expr[i]=='/')
    {
      data[l-1]= data[l-1]/(expr[i+1]-'0');
      i++;
    }
    else if(expr[i]=='*')
    {
      data[l-1]= data[l-1]*(expr[i+1]-'0');
      i++;
    }
    else if(expr[i]=='+')
    {
      data[l]= -1;
      l++;
    }
    else if(expr[i]=='-')
    {
      data[l-1]= -2;
      l++;
    }
  }
  ans=data[0];
  for(i=1;i<l;i++)
  {
    if(data[i]==-1)
    ans+=data[i+1];
    else if(data[i]==-2)
    ans-=data[i+1];
  }
  printf("\nResult: %d\n",ans);
return 0;
}
