Class: Matrix
The Matrix class contains the following member functions:

int** createMatrix(int rows, int columns)
This function dynamically allocates memory for a matrix of the specified size and returns a pointer to the matrix.

Parameters:

rows: The number of rows in the matrix.
columns: The number of columns in the matrix.
Returns:

A pointer to the dynamically allocated matrix.
int** addMatrices(int* pointer1, int rows1, int cols1, int* pointer2, int rows2, int cols2)
This function adds two matrices together and returns the result as a new matrix.

Parameters:

pointer1: Pointer to the first matrix.
rows1: Number of rows in the first matrix.
cols1: Number of columns in the first matrix.
pointer2: Pointer to the second matrix.
rows2: Number of rows in the second matrix.
cols2: Number of columns in the second matrix.
Returns:

A pointer to the resulting matrix, which is the sum of the two input matrices.
int determinantTwoByTwo(int matrix[2][2])
This function calculates the determinant of a 2x2 matrix and returns the result.

Parameters:

matrix: The input 2x2 matrix.
Returns:

The determinant of the input matrix.
int dThreeByThree(int matrix[3][3])
This function calculates the determinant of a 3x3 matrix and returns the result.

Parameters:

matrix: The input 3x3 matrix.
Returns:

The determinant of the input matrix.
int** subtractMatrices(int* pointer1, int rows1, int cols1, int* pointer2, int rows2, int cols2)
This function subtracts one matrix from another and returns the result as a new matrix.

Parameters:

pointer1: Pointer to the first matrix.
rows1: Number of rows in the first matrix.
cols1: Number of columns in the first matrix.
pointer2: Pointer to the second matrix.
rows2: Number of rows in the second matrix.
cols2: Number of columns in the second matrix.
Returns:

A pointer to the resulting matrix, which is the difference between the two input matrices.
int** multiplyMatrixes(int* pounter1, int rows1, int cols1, int* pointer2, int rows2, int cols2)
This function multiplies two matrices together and returns the result as a new matrix.

Parameters:

pounter1: Pointer to the first matrix.
rows1: Number of rows in the first matrix.
cols1: Number of columns in the first matrix.
pointer2: Pointer to the second matrix.
rows2: Number of rows in the second matrix.
cols2: Number of columns in the second matrix.
Returns:

A pointer to the resulting matrix, which is the product of the two input matrices.
void printMatrix(int** matrix, int rows, int columns)
This function prints a matrix to the standard output.

Parameters:

matrix: Pointer to the matrix to be printed.
rows: Number of rows in the matrix.
columns: Number of columns in the matrix.
