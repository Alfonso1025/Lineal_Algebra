#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED
#define ROWS1 2
#define COLUMNS1 2
#define ROWS2 2
#define COLUMNS2 2


class Matrix{

public:
     int** createMatrix(int rows, int columns){
        int** matrix;
        matrix = new int*[rows];
        for(int i= 0; i<rows; i++){
            matrix[i] = new int[columns];
        }
        return matrix;
     }
     int** addMatrices(int* pointer1, int rows1, int cols1, int* pointer2, int rows2, int cols2) {
        // Check if matrices have compatible dimensions
        if (rows1 != rows2 || cols1 != cols2) {
            std::cout << "These matrices cannot be added. They must have the same dimensions." << std::endl;
            return nullptr;
        }

        // Create an output matrix with dimensions (rows1 x cols1)
        int** result = createMatrix(rows1, cols1);

        // Perform matrix addition
        for (int i = 0; i < rows1; i++) {
            for (int j = 0; j < cols1; j++) {
                result[i][j] = *(pointer1 + i * cols1 + j) + *(pointer2 + i * cols1 + j);
            }
        }
        return result;
    }

    int determinantTwoByTwo(int matrix[2][2]){
         int result;
         int mayorD = matrix[0][0]*matrix[1][1];
         int minorD = matrix[0][1]*matrix[1][0];
         result = mayorD - minorD;
         return result;
      }
     int dThreeByThree(int matrix[3][3]){

            int determinantA, determinantB, determinantC, result;

            int matrixOfA[2][2] = { { matrix[1][1], matrix[1][2] },{ matrix[2][1], matrix[2][2] } };
            int matrixOfB[2][2] =  { { matrix[1][0], matrix[1][2] },{ matrix[2][0], matrix[2][2] } };
            int matrixOfC[2][2] =  { { matrix[1][0], matrix[1][1] },{ matrix[2][0], matrix[2][1] } };

            determinantA = matrix[0][0] * dTwoByTwo(matrixOfA);
            determinantB = matrix[0][1] * dTwoByTwo(matrixOfB);
            determinantC = matrix[0][2] * dTwoByTwo(matrixOfC);
            printf("determinantA is %i \n", determinantA);
            printf("determinantB is %i \n", determinantB);
            printf("determinantC is %i \n", determinantC);
            result = determinantA - determinantB + determinantC;
            return result;
      }
    int** subtractMatrices(int* pointer1, int rows1, int cols1, int* pointer2, int rows2, int cols2) {
        // Check if matrices have compatible dimensions
        if (rows1 != rows2 || cols1 != cols2) {
            std::cout << "These matrices cannot be subtracted. They must have the same dimensions." << std::endl;
            return nullptr;
        }

        // Create an output matrix with dimensions (rows1 x cols1)
        int** result = createMatrix(rows1, cols1);

        // Perform matrix subtraction
        for (int i = 0; i < rows1; i++) {
            for (int j = 0; j < cols1; j++) {
                result[i][j] = *(pointer1 + i * cols1 + j) - *(pointer2 + i * cols1 + j);
            }
        }
        return result;
    }
     int** multiplyMatrixes(int* pounter1, int rows1, int cols1, int* pointer2, int rows2, int cols2) {

         //check if matrices can be multiplied
         if(cols1 != rows2){
            std::cout <<"This matrices cant be multiplied. The rows of the first one must be equal to the columns of the second one" <<std::endl;
         }
        // create an output matrix with dimensions (rows1 x cols2)
        int** result;
       result = new int*[rows1];

        // initialize all values to 0
        for(int i= 0; i<rows1; i++){
            result[i] = new int[cols2];
        }
        for(int x =0; x<rows1; x++){
            for(int y =0; y<cols2; y++){
                result[x][y] = 0;
            }
        }
        // perform matrix multiplication
        for (int i = 0; i < rows1; i++) {
            for (int j = 0; j < cols2; j++) {
                for (int k = 0; k < cols1; k++) {
//
                    result[i][j] += *(pounter1 + i * cols1 + k) * *(pointer2 + k * cols2 + j);

                }

            }

        }
    return result;

}

     void printMatrix(int**matrix,int rows, int columns){
         for(int i=0; i<rows; i++){
            for(int j =0; j<columns; j++){
                  std::cout << matrix[i][j] << " ";
            }
             std::cout << std::endl;
         }
     }
};


void init(){

 int matrixOne[ROWS1][COLUMNS1] = {{5,2}, {-1,-3} };
 int matrixTwo[ROWS2][COLUMNS2] = { {1,0}, {2,1} };
 int*ptr = &matrixOne[0][0];
 int*ptr2 = &matrixTwo[0][0];
  Matrix matrix;
  //int** result = matrix.multiplyMatrixes(ptr, ROWS1, COLUMNS1, ptr2, ROWS2, COLUMNS2);
  int ** result = matrix.multiplyMatrixes(ptr, ROWS1,COLUMNS1, ptr2, ROWS2, COLUMNS2);
  matrix.printMatrix(result, ROWS1, COLUMNS2);

}

#endif // MATRIX_H_INCLUDED
