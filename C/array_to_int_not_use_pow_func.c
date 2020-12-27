#include <stdio.h>

int main()
{
        char dob_day[4];
        dob_day[0] = 1;
        dob_day[1] = 9;
        dob_day[2] = 9;
        dob_day[3] = 4;
        
        int dob_day_int = 0;
        int i = 0, j = 0, power = 1;
        for (; i < strlen(dob_day); i++){
            
            for(; j < strlen(dob_day)-i-1;j++){
                power = 10*power;
            }
            
            dob_day_int = dob_day_int + dob_day[i]*power;
            power = 1;
            j=0;
        }
    printf("value = %d", dob_day_int);

    return 0;
}
