#include "mycal.h"



int main(){

    char *input = calloc(105,sizeof(char));
    gets(input);
    int32_t input_base;
    scanf("%d",&input_base);
    char *Result = NULL;
    int32_t return_value = calculate(input,input_base,&Result);
    printf("%d %s",return_value,Result);


}
