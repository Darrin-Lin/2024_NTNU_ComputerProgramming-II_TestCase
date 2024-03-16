#include "mycal.h"



int main(){


    char *Result = NULL;
    int32_t return_value;
    
    for(int i=8;i<=16;i++){
        Result = NULL;
    return_value = calculate("999_10 * 999_12 * 999_13 * 999_14 * 45645_14 + 2_10",i,&Result);
    printf("%d %s\n",return_value,Result);
    }
    

}
