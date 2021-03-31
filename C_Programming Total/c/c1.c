#include <stdio.h>

int main(void){
// i couldn't get this to work for an odd number of elements
#define NUM_ELEMENTS 6
int userArray[NUM_ELEMENTS];
int userArray2[NUM_ELEMENTS];
int i;
int tempVal = 0;
double sumArray = 0;
double aveArray = 0;


printf("Enter 6 interger numbers (each one separated by a space):\n");
for(i = 0; i < NUM_ELEMENTS; i++){
    scanf("%d", &userArray[i]);
}

for(i = 0; i < NUM_ELEMENTS; i++){
    sumArray = sumArray + userArray[i];
}

//aveArray = sumArray/NUM_ELEMENTS;

//printf("\nAverage of all data points is %.2lf \n",aveArray);
printf("\nAn array in reverse order:\n");

for(i = NUM_ELEMENTS - 1; i >= 0; i--){
    printf("%d ",userArray[i]);
}
printf("\n");

//Used swap values in the array
for(i = 0; i < (NUM_ELEMENTS / 2); i++){
    tempVal = userArray[i];
    userArray2[i] = userArray[NUM_ELEMENTS - 1- i];
    userArray2[NUM_ELEMENTS - 1 - i] = tempVal;
}
if(userArray[i] == userArray2[i])
    printf("\nThis array is symmetric\n");
else
    printf("\nThis array is NOT symmetric\n");

    return 0;
}
