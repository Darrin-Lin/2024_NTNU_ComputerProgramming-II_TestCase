#include "mymaze.h"
int main()
{
    uint8_t row = 0, col = 0;
    scanf("%hhu", &row);
    scanf("%hhu", &col);
    sRoom inp[row][col];
    for (uint8_t i = 0; i < row; i++)
    {
        for (uint8_t j = 0; j < col; j++)
        {
            scanf("%u", &inp[i][j].cost);
            // input doors in four sides
            uint8_t up, right, down, left;
            scanf("%hhu %hhu %hhu %hhu", &up, &right, &down, &left);
            inp[i][j].doors = (up << 6) | (right << 4) | (down << 2) | left;
        }
    }
    sPath result;
    printf("return: %d\n",find_min_path(inp,row,col,&result));
    printf("cost:%d length:%d\n\n",result.cost,result.length);
    for(uint32_t i=0;i<result.length;i++)
    {
        printf("%d %d\n",result.pPath[i].row,result.pPath[i].col);
    }
    free(result.pPath);
}