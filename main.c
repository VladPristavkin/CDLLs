#include <stdio.h>
#include "MathOperations.c"
#include <stdlib.h>


#define leftRow 3
#define leftColumn 4
#define rightRow 3
#define rightColumn 4
#define resultRow 3
#define resultColumn 4



void printMatrix(int** , int ,int);
void filling(int** , int, int);

int main(){

    int** array=(int**)malloc( leftRow *sizeof(int*));
    for (size_t i = 0; i < leftRow; i++)
    {
        array[i]=(int*)malloc(leftColumn*sizeof(int));
    }
    
    

    int** sec=(int**)malloc(rightRow*sizeof(int*));
    for (size_t i = 0; i < rightRow; i++)
    {
        sec[i]=(int*)malloc(rightColumn*sizeof(int));
    }




    int** res=(int**)malloc(resultRow*sizeof(int*));
    for (size_t i = 0; i < resultRow; i++)
    {
        res[i]=(int*)malloc(resultColumn*sizeof(int));
    }

    filling(array, leftRow,leftColumn);
    filling(sec,rightRow,rightColumn);


    // int result=int_matrix_addition(array,leftRow,leftColumn,
    //  sec,rightRow,rightColumn, res, resultRow,resultColumn);
    // printf("Result: %d \n",result);

    printMatrix(array,leftRow ,leftColumn);printf("\n");
    // printMatrix(sec,rightRow,rightColumn);printf("\n");
    // printMatrix(res,resultRow,resultColumn);printf("\n");

    int_transpose(&array, leftRow, leftColumn);

    printMatrix(array,leftColumn ,leftRow);printf("\n");

    return 0;
}

void printMatrix(int** array, int k, int m){
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d \t", array[i][j]);
        }
        printf("\n");
        
    }
    
}

void filling(int** array, int k, int m){
     for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < m; j++)
        {
            array[i][j]=i*j;
        }        
    }
}