#include <stdio.h>
#include <string.h>
int main(){
   char str[30],choice,*ptr;
   int i,index;


       printf("\n\nFind the double characters :\n\n");

	printf("Input the string : ");
    fgets(str,sizeof str,stdin);
    if (strlen(str)<3) {
      printf("Please enter a longer string\n" );
        fgets(str,sizeof str,stdin);
    }

   printf("Input the double character to find : ");
   scanf("%c",&choice);
   for(i=0;str[i]!='\0';++i)
   {
     ptr = strchr(str, choice);
     index = (int)( ptr-str);
   }

   printf("'%c' is first repeated @ the location :%d \n\n", choice,index);

return index;
}
