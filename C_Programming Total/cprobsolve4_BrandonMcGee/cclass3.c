#include <stdio.h>
#define MIN_SIZE 10
#define MAX_SIZE 35
int main()
{
    char name[35], ch;
    int i = 0;
    printf("Please enter some characters: ");
    while(ch != '\n')    // terminates if user hit enter
    {
        ch = getchar();
        name[i] = ch;
        i++;
        while (name[i]<MIN_SIZE) {
          printf("please enter more characters, the minimum is ten\n" );
          ch = getchar();
          name[i] = ch;
        }

    }

    name[i] = '\0';       // inserting null character at end
    printf("Your String : %s", name);
    return 0;
}
