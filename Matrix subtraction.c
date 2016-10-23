/*

Program Name: Write a program to calculate the subtraction of two matrix
              by using multidimensional array.
Program by: Elliyas Ahmed
Date: 17.10.2016


*/

#include <stdio.h>
#define ROW 2
#define COLUMN 3
int main()
{
    int matA[ROW][COLUMN], matB[ROW][COLUMN];
    int i,j;

    /*Input the elements of Matrix A*/

    printf("Input Elements of Matrix A\n\n");

    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COLUMN; j++)
        {
            printf("matA%d%d = ",i,j);
            scanf("%d",&matA[i][j]);
        }
    }

    /*Input the elements of Matrix B*/

    printf("\nInput Elements of Matrix B\n\n");

    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COLUMN; j++)
        {
            printf("matB%d%d = ",i,j);
            scanf("%d",&matB[i][j]);
        }
    }
    /*CALCULATION and Result*/

    printf("\nSubtraction of MAT A AND MAT B\n\n");

    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COLUMN; j++)
        {
            printf("%d\t",matA[i][j]-matB[i][j]);
        }
        printf("\n");
    }
    return 0;
}
