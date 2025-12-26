// Identify-matrix
#include <stdio.h>
int main()
{
    int a[10][10];
    int i = 0, j = 0, row = 0, col = 0;

    //Enter the order of the matrix (mxn)
    scanf("%d %d", &row, &col);

    // Read matrix
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // If not square matrix -> not identity
    if(row != col)
    {
        printf("-1");
        return 0;
    }

    // Check identity matrix conditions
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0))
            {
                printf("-1");
                return 0;
            }
        }
    }

    printf("1");
    return 0;
}