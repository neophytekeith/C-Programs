#include<stdio.h>
int main()
{
    char todisplay[500];
    int howmanytimes;

    printf("What to print?");
    scanf("%[^\n]", todisplay); //i used the format specifiuer %[^\n] to print all characters until newline

    printf("How many times?");
    scanf("%i", &howmanytimes);

        //loop
        int i = 0;
        while (i < howmanytimes) {
            printf("%s\n", todisplay);
            i++;
        }


return 0;
}