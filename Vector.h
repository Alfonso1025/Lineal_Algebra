#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
#include <cmath>
#include <iomanip>
#include <iostream>


class Vector{
  private:
    int len;  // Length of the vectors
    int* elements;  // Array to store the elements of the vector

public:
    // Constructor
    Vector(int length) {
        len = length;
    }
    double calculateDotProduct(int v1[], int v2[]){
       double result = 0.0;
       for(int i =0; i < len; i++){
         result = result + v1[i]*v2[i];
       }
       return result;
     }

      double calculateEcuclideanNorm(int v[]){
        double addition =0.0,  result;
        for(int i = 0; i< LEN; i++){
            addition = addition + pow(v[i], 2);
        }


        result = sqrt(addition);
        return result;
     }

      float calculateAngule(int v1[], int v2[]){

        double cosTheta, magnitude1, magnitude2;
        double dotProduct = calculateDotProduct(v1,v2);
        magnitude1 = calculateEcuclideanNorm(v1);
        magnitude2 = calculateEcuclideanNorm(v2);
        cosTheta = dotProduct/(magnitude1 * magnitude2);
        std::cout<<"this is cosTheta "<<cosTheta<<std::endl;
        float angle = acos(cosTheta) * 180 / M_PI;

        return angle;


}


};


void init(){

int LEN = 3;
int vectorOne[LEN] = {3,1,2};
int vectorTwo[LEN] = {1,4,3};
Vector v(LEN);
int result = v.calculateDotProduct(vectorOne, vectorTwo);
std::cout<<"this is the dot product: "<<result<<std::endl;
double magnitude1 =v.calculateEcuclideanNorm(vectorOne);
double magnitude2 = v.calculateEcuclideanNorm(vectorTwo);
//double dotProduct = calculateDotProduct(vectorOne, vectorTwo);
//float angle = calculateAngule(vectorOne, vectorTwo);
//
std::cout << "magnitude1 is: " << std::fixed << std::setprecision(3) << magnitude1 <<"magnitude2 is: "<<magnitude2<< std::endl;
//cout<<"this is the angle "<<angle<<endl;
//printf("this is the  magnitude: %.3f, dotproduct: %i", magnitude, dotProduct);
}

#endif // VECTOR_H_INCLUDED


#endif // VECTOR_H_INCLUDED
