#include<stdio.h>
int main(void)
{
  int mat[10][10],i,j,cs,rs;
  printf("\n::::::Question 5:::::\n" );
  printf("\nEnter your desired number of columns:::\n");
  scanf("%d", &cs);
  printf("\nEnter your desired number of rows:::\n ");
  scanf("%d", &rs);
  printf("\n\nPlease enter your matrix\n");
  for(i=0;i<cs;i++)
    for(j=0;j<rs;j++)
      {
        scanf("%d",&mat[i][j]);
      }
  printf("\nHere is your matrix:\n");
  for(i=0;i<cs;i++)
    {
      for(j=0;j<rs;j++)
        {
          printf("%d ",mat[i][j]);
        }
      printf("\n");
    }
    if (rs==cs) {
      printf("Great!!! You entered a square matrix\n" );
    } else {
      printf("Still pretty good, but your matrix was not square\n" );
    }
  return 0;
}
