#include <stdio.h>

struct employee
{
  char firstName[50];
  char lastName[50];
  int age;
  double salary;
};

void displayHigestSalay(struct employee emps[], int size)
{
  int higestIndex = 0;
  int i;
  for(i=1; i<size; i++) {
    if(emps[i].salary > emps[higestIndex].salary)
    higestIndex = i;
}
printf("Last name: %s\n", emps[higestIndex].lastName);
}
void displayOldestEmp(struct employee emps[], int size)
{
  int oldEmpIndex = 0;
  int i;
  for(i=1; i<size; i++)
   {
     if(emps[i].age > emps[oldEmpIndex].age)
     oldEmpIndex = i;
}
printf("Last name: %s\n", emps[oldEmpIndex].lastName);
}
int main()
{
  struct employee emps[50];
  int i;
  for(i=0;i<50; i++)
  {
    printf("Enter firstName, lastName, age and salary of employee %d\n", i+1);
    scanf("%s", emps[i].firstName);
    scanf("%s", emps[i].lastName);
    scanf("%d", &emps[i].age);
    scanf("%lf", &emps[i].salary);
  }
displayHigestSalay(emps, 50);
displayOldestEmp(emps, 50);
return 0;
}
