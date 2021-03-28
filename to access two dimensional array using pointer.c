#include <stdio.h>

#define ROWS 3
#define COLS 3

void inputMatrix(int matrix[][COLS], int rows, int cols);
void printMatrix(int matrix[][COLS], int rows, int cols, int sum);

int main()
{
    int matrix[ROWS][COLS];
    int i, j, sum=0;

    printf("Input elements in the matrix : \n");
    inputMatrix(matrix, ROWS, COLS);
    
    printf("\nThe matrix is : \n\n");
    printMatrix(matrix, ROWS, COLS, sum);


    return 0;
}

void inputMatrix(int matrix[][COLS], int rows, int cols)
{
    int i, j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
        	printf("element - [%d],[%d] : ",i,j);
            scanf("%d", (*(matrix + i) + j));		
        }
    }
}

void printMatrix(int (*matrix)[COLS], int rows, int cols, int sum)
{
    int i, j;


    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", *(*(matrix + i) + j));
            if(i==j)
			{
				sum = sum + *(*(matrix + i) + j);
			}		
        }

        printf("\n");
    }
    printf("\nSum of diagonal elements is : %d",sum);
}
