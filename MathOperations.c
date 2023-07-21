//Matrix multiplication functions

int int_matrix_multiplication(int** leftMatrix, int rowsOfLeftMatrix, int columnsOfLeftMatrix, 
int** rightMatrix, int columnsOfRightMatrix, 
int** resultMatrix, int rowsOfResultMatrix, int columnsOfResultMatrix){

    if (rowsOfLeftMatrix!=columnsOfRightMatrix)
    {
        return -1;
    }
    else if(rowsOfLeftMatrix != rowsOfResultMatrix | columnsOfRightMatrix != columnsOfResultMatrix){
        return -2;
    }
    
    for (register int i = 0; i < rowsOfLeftMatrix; i++)
    {
        for (register int j = 0; j < columnsOfRightMatrix; j++)
        {
            register int sum = 0;

            for (register int k = 0; k < columnsOfLeftMatrix; k++)
            {
               sum += leftMatrix[i][k] * rightMatrix[k][j];
            }
            
            resultMatrix[i][j] = sum;
        }
    }

    return 0;
}

int double_matrix_multiplication(double** leftMatrix, int rowsOfLeftMatrix, int columnsOfLeftMatrix, 
double** rightMatrix, int columnsOfRightMatrix, 
double** resultMatrix, int rowsOfResultMatrix, int columnsOfResultMatrix){

    if (rowsOfLeftMatrix!=columnsOfRightMatrix)
    {
        return -1;
    }
    else if(rowsOfLeftMatrix != rowsOfResultMatrix | columnsOfRightMatrix != columnsOfResultMatrix){
        return -2;
    }
    
    for (register int i = 0; i < rowsOfLeftMatrix; i++)
    {
        for (register int j = 0; j < columnsOfRightMatrix; j++)
        {
            register double sum = 0;

            for (register int k = 0; k < columnsOfLeftMatrix; k++)
            {
               sum += leftMatrix[i][k] * rightMatrix[k][j];
            }
            
            resultMatrix[i][j] = sum;
        }
    }

    return 0;
}

int single_matrix_multiplication(float** leftMatrix, int rowsOfLeftMatrix, int columnsOfLeftMatrix, 
float** rightMatrix, int columnsOfRightMatrix, 
float** resultMatrix, int rowsOfResultMatrix, int columnsOfResultMatrix){

    if (rowsOfLeftMatrix!=columnsOfRightMatrix)
    {
        return -1;
    }
    else if(rowsOfLeftMatrix != rowsOfResultMatrix | columnsOfRightMatrix != columnsOfResultMatrix){
        return -2;
    }
    
    for (register int i = 0; i < rowsOfLeftMatrix; i++)
    {
        for (register int j = 0; j < columnsOfRightMatrix; j++)
        {
            register float sum = 0;

            for (register int k = 0; k < columnsOfLeftMatrix; k++)
            {
               sum += leftMatrix[i][k] * rightMatrix[k][j];
            }
            
            resultMatrix[i][j] = sum;
        }
    }

    return 0;
}

//Functions for matrix addition/subtraction

int int_matrix_addition(int** leftMatrix, int rowsOfLeftMatrix, int columnsOfLeftMatrix, 
int** rightMatrix, int rowsOfRightMatrix, int columnsOfRightMatrix, 
int** resultMatrix, int rowsOfResultMatrix, int columnsOfResultMatrix){

    if (rowsOfLeftMatrix != rowsOfRightMatrix | columnsOfLeftMatrix!= columnsOfRightMatrix)
    {
        return -1;
    }
    else if(rowsOfLeftMatrix != rowsOfResultMatrix | columnsOfRightMatrix != columnsOfResultMatrix){
        return -2;
    }
    
    for (register int i = 0; i < rowsOfLeftMatrix; i++)
    {
        for (register int j = 0; j < columnsOfRightMatrix; j++)
        {
            resultMatrix[i][j] = leftMatrix[i][j] + rightMatrix[i][j];
        }
    }

    return 0;
}

int double_matrix_addition(double** leftMatrix, int rowsOfLeftMatrix, int columnsOfLeftMatrix, 
double** rightMatrix, int rowsOfRightMatrix, int columnsOfRightMatrix, 
double** resultMatrix, int rowsOfResultMatrix, int columnsOfResultMatrix){

    if (rowsOfLeftMatrix != rowsOfRightMatrix | columnsOfLeftMatrix!= columnsOfRightMatrix)
    {
        return -1;
    }
    else if(rowsOfLeftMatrix != rowsOfResultMatrix | columnsOfRightMatrix != columnsOfResultMatrix){
        return -2;
    }
    
    for (register int i = 0; i < rowsOfLeftMatrix; i++)
    {
        for (register int j = 0; j < columnsOfRightMatrix; j++)
        {
            resultMatrix[i][j] = leftMatrix[i][j] + rightMatrix[i][j];
        }
    }

    return 0;
}

int float_matrix_addition(float** leftMatrix, int rowsOfLeftMatrix, int columnsOfLeftMatrix, 
float** rightMatrix, int rowsOfRightMatrix, int columnsOfRightMatrix, 
float** resultMatrix, int rowsOfResultMatrix, int columnsOfResultMatrix){

    if (rowsOfLeftMatrix != rowsOfRightMatrix | columnsOfLeftMatrix!= columnsOfRightMatrix)
    {
        return -1;
    }
    else if(rowsOfLeftMatrix != rowsOfResultMatrix | columnsOfRightMatrix != columnsOfResultMatrix){
        return -2;
    }
    
    for (register int i = 0; i < rowsOfLeftMatrix; i++)
    {
        for (register int j = 0; j < columnsOfRightMatrix; j++)
        {
            resultMatrix[i][j] = leftMatrix[i][j] + rightMatrix[i][j];
        }
    }

    return 0;
}


int int_matrix_subtraction(int** leftMatrix, int rowsOfLeftMatrix, int columnsOfLeftMatrix, 
int** rightMatrix, int rowsOfRightMatrix, int columnsOfRightMatrix, 
int** resultMatrix, int rowsOfResultMatrix, int columnsOfResultMatrix){

    if (rowsOfLeftMatrix != rowsOfRightMatrix | columnsOfLeftMatrix!= columnsOfRightMatrix)
    {
        return -1;
    }
    else if(rowsOfLeftMatrix != rowsOfResultMatrix | columnsOfRightMatrix != columnsOfResultMatrix){
        return -2;
    }
    
    for (register int i = 0; i < rowsOfLeftMatrix; i++)
    {
        for (register int j = 0; j < columnsOfRightMatrix; j++)
        {
            resultMatrix[i][j] = leftMatrix[i][j] - rightMatrix[i][j];
        }
    }

    return 0;
}

int double_matrix_subtraction(double** leftMatrix, int rowsOfLeftMatrix, int columnsOfLeftMatrix, 
double** rightMatrix, int rowsOfRightMatrix, int columnsOfRightMatrix, 
double** resultMatrix, int rowsOfResultMatrix, int columnsOfResultMatrix){

    if (rowsOfLeftMatrix != rowsOfRightMatrix | columnsOfLeftMatrix!= columnsOfRightMatrix)
    {
        return -1;
    }
    else if(rowsOfLeftMatrix != rowsOfResultMatrix | columnsOfRightMatrix != columnsOfResultMatrix){
        return -2;
    }
    
    for (register int i = 0; i < rowsOfLeftMatrix; i++)
    {
        for (register int j = 0; j < columnsOfRightMatrix; j++)
        {
            resultMatrix[i][j] = leftMatrix[i][j] - rightMatrix[i][j];
        }
    }

    return 0;
}

int float_matrix_subtraction(float** leftMatrix, int rowsOfLeftMatrix, int columnsOfLeftMatrix, 
float** rightMatrix, int rowsOfRightMatrix, int columnsOfRightMatrix, 
float** resultMatrix, int rowsOfResultMatrix, int columnsOfResultMatrix){

    if (rowsOfLeftMatrix != rowsOfRightMatrix | columnsOfLeftMatrix!= columnsOfRightMatrix)
    {
        return -1;
    }
    else if(rowsOfLeftMatrix != rowsOfResultMatrix | columnsOfRightMatrix != columnsOfResultMatrix){
        return -2;
    }
    
    for (register int i = 0; i < rowsOfLeftMatrix; i++)
    {
        for (register int j = 0; j < columnsOfRightMatrix; j++)
        {
            resultMatrix[i][j] = leftMatrix[i][j] - rightMatrix[i][j];
        }
    }

    return 0;
}


//Functions for transpose

#include <stdlib.h>

void int_transpose(int*** array, int rows, int columns){

    int** temp_array=(int**)malloc(columns * sizeof(int*));

    for (register int i = 0; i < columns; i++)
    {
        temp_array[i]=(int*)malloc(rows * sizeof(int));
    }

    for (register int i = 0; i < rows; i++)
    {
        for (register int j = 0; j < columns; j++)
        {
            temp_array[j][i] = (*array)[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        free((*array)[i]);
    }
    free(*array);
    
    *array=temp_array;
}

void double_transpose(double*** array, int rows, int columns){

    double** temp_array=(double**)malloc(columns * sizeof(double*));

    for (register int i = 0; i < columns; i++)
    {
        temp_array[i]=(double*)malloc(rows * sizeof(double));
    }

    for (register int i = 0; i < rows; i++)
    {
        for (register int j = 0; j < columns; j++)
        {
            temp_array[j][i] = (*array)[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        free((*array)[i]);
    }
    free(*array);
    
    *array=temp_array;
}

void float_transpose(float*** array, int rows, int columns){

    float** temp_array=(float**)malloc(columns * sizeof(float*));

    for (register int i = 0; i < columns; i++)
    {
        temp_array[i]=(float*)malloc(rows * sizeof(float));
    }

    for (register int i = 0; i < rows; i++)
    {
        for (register int j = 0; j < columns; j++)
        {
            temp_array[j][i] = (*array)[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        free((*array)[i]);
    }
    free(*array);
    
    *array=temp_array;
}
