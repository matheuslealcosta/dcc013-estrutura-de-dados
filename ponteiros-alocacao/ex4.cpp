/*
Implemente uma unica func¸ ´ ao que receba um vetor de ˜
numeros inteiros ( ´ vet) e o seu tamanho (tam) e:
I conte o total de elementos pares;
I conte o total de elementos ´ımpares;
I conte o total de elementos negativos;
I retorne verdadeiro se existirem numeros negativos no ´
vetor, ou retorne falso, caso contrario. ´
Considere o seguinte prototipo: ´
bool func(int tam, int vet[], int *par,
int *impar, int *negativos);
*/


#include <iostream>

using namespace std;

bool func(int tam, int vet[], int *par, int *impar, int *negativos)
{
 for (int i = 0; i < tam; i++)
 {
    //contagem de pares
    if((vet[i] % 2) == 0)
    (*par)++;
    //contagem de impares
    if((vet[i] % 2) != 0)
    (*impar)++;
    //contagem de negativos
    if(vet[i] < 0)
    (*negativos)++;
 }
    //retorno da função, em relação a existir ou não valores negativos
    if(*negativos > 0)
    return 1;
    
    else 
    return 0;
 
}

int main()
{
    //este exercício não envolve alocação dinâmica, portanto o vetor
    //será fornecido estaticamente dentro do código.
    cout << "O vetor será: [-3, -1, 1, 2, 3, 6, 7, 9, 13]" << endl;
    int vet[9] = {-3, -1, 1, 2, 3, 6, 7, 9, 13};
    int tamanho = 9;
    int par = 0, impar = 0, negativos = 0;
    cout << func(tamanho, vet, &par, &impar, &negativos) << endl;
    cout << "Quantidade de valores pares: " << par << endl;
    cout << "Quantidade de valores impares: " << impar << endl;
    cout << "Quantidade de valores negativos: " << negativos << endl;

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
