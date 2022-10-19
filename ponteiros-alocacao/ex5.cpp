/*
Fac¸a um programa que leia um numero inteiro ´ n e aloque
um vetor com n inteiros de forma dinamica (use o ˆ
operador new). Em seguida, o programa deve ler os
valores do vetor e calcular a m´edia dos elementos desse
vetor. Por fim, deve desalocar (use o operador delete) a
memoria usada para armazenar os seus elementos.
*/

#include <iostream>

using namespace std;

    //funcao para calcular a media e retornar;
    float calculamedia(int vet[], int tam)
    {
        float media = 0;
        for (int i = 0; i < tam; i++)
        {
            media+=(float)vet[i];
        }
        return media / tam;
    }

int main()
{
    //le o tamanho e cria um vetor vazio com o tamanho escolhido
    int tam = 0;
    cout << "Digite o tamanho do vetor: " << endl;
    cin >> tam;
    int *vet = new int [tam];
    //le os valores do vetor
    for (int i = 0; i < tam; i++)
    {
        cout << "digite o valor de posição " << i << " do vetor" << endl;
        cin >> vet[i];
    }
    cout << "A media e: " << calculamedia(vet, tam) << endl;
    

    
    int fechar = 0;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Deseja finalizar o programa? Digite 1" << endl;
    cin >> fechar;
    if (fechar = 1)
    {
        return 0;
    }
}
