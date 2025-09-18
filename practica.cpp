#include <iostream>
int main(){
    int arreglo[5] = {2,4,6,8,10};
    int suma = 0;
    for (int j = 0; j < 5; j++){
        suma += arreglo[j];

    }
    std::cout<<"La suma del arreglo es: "<<suma<<std::endl;
    return 0;


}