#include <stdio.h>
int main(void)
{
int x,x1, y=5678;
printf("\n::::::Question 6:::::\n" );
printf("\nPlease enter the four-digit PIN for the SIM ");
scanf("%d", &x);
if (x == y)
{
  printf("\nplease enter again for added security::");
  printf("\nPlease enter the four-digit PIN for the SIM ");
  scanf("%d", &x1);
  if (x1==y)
  {
    printf("THANKS! Your PIN is 5678:\n" );
    //break;
  }
  else
  {
    printf("sorry, invalid\n" );
    //break;
  }

}
else
if (x > y)
{
  printf("sorry, invalid\n" );
}
else
{
  printf("sorry, invalid\n" );
}

printf("\n\n");

return 0;

}
