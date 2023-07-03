# Linear Algebra
# Matrix Class

This is a C++ library for performing operations on matrices and vectors. It provides various methods for matrix manipulation, including matrix addition, subtraction, multiplication, and determinant calculation.

## Usage

### Example: Matrix Multiplication
Declare two statatic matrices and store the addresses of their first element in a pointer variable. Create an instance objetc of the 
class Matrix and call multiplyMatrixes passing the two pointers as well as the dimmensions of each matrix as parameters. The method will return the result matrix which you can print by calling the printMatrix() method.

```
#include "Matrix.h"

int main() {
    int matrixOne[ROWS1][COLUMNS1] = {{5, 2}, {-1, -3}};
    int matrixTwo[ROWS2][COLUMNS2] = {{1, 0}, {2, 1}};
    int* ptr1 = &matrixOne[0][0];
    int* ptr2 = &matrixTwo[0][0];

    Matrix matrix;
    int** result = matrix.multiplyMatrixes(ptr1, ROWS1, COLUMNS1, ptr2, ROWS2, COLUMNS2);
    matrix.printMatrix(result, ROWS1, COLUMNS2);

    return 0;
}

### Example: Matrix substraction 
Declare two statatic matrices and store the addresses of their first element in a pointer variable. Create an instance objetc of the 
class Matrix and call substractMatrices passing the two pointers as well as the dimmensions of each matrix as parameters. The method will return the result matrix which you can print by calling the printMatrix() method.

```
#include "Matrix.h"

int main() {
    int matrixOne[ROWS1][COLUMNS1] = {{5, 2}, {-1, -3}};
    int matrixTwo[ROWS2][COLUMNS2] = {{1, 0}, {2, 1}};
    int* ptr1 = &matrixOne[0][0];
    int* ptr2 = &matrixTwo[0][0];

    Matrix matrix;
    int** result = matrix.substractMtrices(ptr1, ROWS1, COLUMNS1, ptr2, ROWS2, COLUMNS2);
    matrix.printMatrix(result, ROWS1, COLUMNS2);

    return 0;
}
### Example: Matrix addition
Declare two statatic matrices and store the addresses of their first element in a pointer variable. Create an instance objetc of the 
class Matrix and call addMatrices passing the two pointers as well as the dimmensions of each matrix as parameters. The method will return the result matrix which you can print by calling the printMatrix() method.

```
#include "Matrix.h"

int main() {
    int matrixOne[ROWS1][COLUMNS1] = {{5, 2}, {-1, -3}};
    int matrixTwo[ROWS2][COLUMNS2] = {{1, 0}, {2, 1}};
    int* ptr1 = &matrixOne[0][0];
    int* ptr2 = &matrixTwo[0][0];

    Matrix matrix;
    int** result = matrix.addMatrices(ptr1, ROWS1, COLUMNS1, ptr2, ROWS2, COLUMNS2);
    matrix.printMatrix(result, ROWS1, COLUMNS2);

    return 0;
}
```
### Example: Calculate the determinant of a 2x2 matrix
Declare a static matrix of 2x2 dimmensions. Create an object of the Matrix class and call the determinantTwoByTwo method passing the matri as argument. The method returns 0 if the system of equations is linearly dependent, 1 if the syatem of equations is linearly independent

```
#include "Matrix.h"

int main() {
    int matrixOne[ROWS1][COLUMNS1] = {{5, 2}, {-1, -3}};
    
    Matrix matrix;
    int determinant = matrix.determinantTwoByTwo(matrixOne);
    
    return 0;
}
```
### Example: Calculate the determinant of a 3x3 matrix
Declare a static matrix of 3x3 dimmensions. Create an object of the Matrix class and call the determinantTwoByTwo method passing the matri as argument. The method returns 0 if the system of equations is linearly dependent, 1 if the syatem of equations is linearly independent

```
#include "Matrix.h"

int main() {
    int matrixOne[ROWS1][COLUMNS1] = {{5, 2,1}, {-1, -3,4}, {5,12,43}};
    
    Matrix matrix;
    int determinant = matrix.determinantThreeByThree(matrixOne);
    
    return 0;
}
```
# Vector class
#Usage

### Example: Calculate dot product of two vectors
Declare  two static arrays of same lenght. Create an object of the Vector class and call the calculateDotProduct method passing the vectors as argument. The method returns a double/scalar.

```


int main() {
int LEN = 3;
int vectorOne[LEN] = {3,1,2};
int vectorTwo[LEN] = {1,4,3};
Vector v(LEN);
int result = v.calculateDotProduct(vectorOne, vectorTwo);
std::cout<<"this is the dot product: "<<result<<std::endl;
    
    return 0;
}
```
### Example: Calculate the Euclidean norm of a vector
Declare  a static array. Create an object of the Vector class and call the calculateEuclideanNorm method passing the vector as argument. The method returns a float value.

```


int main() {
int LEN = 3;
int vectorOne[LEN] = {3,1,2};
int vectorTwo[LEN] = {1,4,3};
Vector v(LEN);
int result = v.calculateEuclideanNorm(vectorOne, vectorTwo);

    
    return 0;
}
```
### Example: Calculate the angle between two vectors
Declare  two static arrays of same lenght. Create an object of the Vector class and call the calculateAngle method passing the vectors as argument. The method returns a float value.

```


int main() {
int LEN = 3;
int vectorOne[LEN] = {3,1,2};
int vectorTwo[LEN] = {1,4,3};
Vector v(LEN);
int result = v.calculateAngle(vectorOne, vectorTwo);

    
    return 0;
}
```
