#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    int count = 0;
    scanf("%d", &n); fgetc(stdin);
    for (int i = 0; i < n; i++) {
        char line[51];
        scanf("%[^\n]", line); fgetc(stdin);
        for(int j = 0; j < strlen(line); j++){
            if(line[j] == ' ')
                count++;
        }
        printf("%d \n", count);
    }

    printf("%f \n",100*(1 - ((float)count/(n*n))));


    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    //printf("100%\n");

    return 0;
}
