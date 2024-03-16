#include "mycal.h"



int main(){


    char *Result = NULL;
    int32_t return_value;

    for(int i=2;i<=16;i++){
        Result = NULL;
        return_value = calculate("ABC_16",i,&Result);
        printf("%d %s\n",return_value,Result);
    }
    

}
