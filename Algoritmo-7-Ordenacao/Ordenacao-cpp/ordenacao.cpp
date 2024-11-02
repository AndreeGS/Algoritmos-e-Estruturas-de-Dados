#include <iostream>

using namespace std;

#define tam 10

void ordenacao (int *arr, int n){

    for (int i = 0; i < n; i++){

        int iMin = i;

        for(int j = i + 1; j < n; j++ ){

            if(arr[j] < arr[iMin]){
                iMin = j;
            }
        }

        int tmp = arr[i];
        arr[i] = arr[iMin];       
        arr[iMin] = tmp;
    }
}

void imprimir (int *arr, int n){

    for( int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {

    int arr[tam] = {12, 20, 5, 38, 27, 3, 10, 42, 54, 2 };

    cout << "Array original: " <<endl;

    imprimir(arr, tam);

    cout << "Array Ordenado: " <<endl;

    ordenacao(arr, tam);

    imprimir(arr, tam);

    return 0;
}