#include <iostream>
#include <math.h>
#define tam 12

using namespace std;

int pesqBin(int[], int);

int main()
{
    int list[tam] = {1,2,4,6,9,10,11,44,56,76,87,92};

    cout << pesqBin(list,56);
}

int pesqBin(int valores[], int procurado) {
    int posLi = 0;
    int posLs = tam - 1;

    while (posLi <= posLs) {

        int posMeio = ceil((posLi + posLs) / 2); //ou podemos usar o floor para arredondar para baixo;

        int palpite = valores[posMeio];
        if (palpite == procurado) 
            return posMeio;
        

        if (palpite > procurado) 
            posLs = posMeio - 1;
        

        else 
            posLi = posMeio + 1;
        
    }

    return -1;
}

