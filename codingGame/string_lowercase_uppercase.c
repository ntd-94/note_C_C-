#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>
/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    unsigned char S[1001];
    scanf("%[^\n]", S);

    if('a'<= S[0] <= 'z')
        S[0] -= 32;

    for(int i = 1; i < strlen(S); i++){  
        if(S[i-1]==' '){
            if(S[i] >= 97 && S[i]<= 122){
                S[i] -= 32;
            }

        }else{
            if(S[i] >= 65 && S[i] <= 90){
                S[i] += 32;
            }else{
               ; 
            }
        }
    }
    printf("String result: %s\n", S);

    return 0;
}
