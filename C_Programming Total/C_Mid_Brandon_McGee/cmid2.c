#include <stdio.h>

int main()
{
    int  i, max,min;
    float num[50], sum = 0.0, average;
    for(i = 0; i < 50; ++i)
    {
        printf("%d. Enter book prices: ", i+1);
        scanf("%f", &num[i]);

        sum += num[i];
        max = num[0];
        min = num[0];

       if(num[i] > max)
       {
           max = num[i];
       }

       if(num[i] < min)
       {
           min = num[i];
       }
        if (num[i]==-1) {
          break;
        }
        //int n = sizeof(num);
    }
    int n = sizeof(num);
    average = sum / i;
    printf("Average = %f\n", average);
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
