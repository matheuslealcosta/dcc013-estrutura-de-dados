/*
Implemente a func¸ao˜ troca que troca o conteudo de duas ´
variaveis inteiras ´ a e b. Fac¸a um programa que teste a
func¸ao implementada. Prot ˜ otipo: ´
void troca(int *a, int *b);
*/

#include <iostream>

using namespace std;


void troca(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
    cout << "A: " << *a << endl << "B: " << *b << endl;
}

int main()
{
    // define e recebe as variaveis
    int a = 0, b = 0;
    cout << "Digite valores inteiros para A e B" << endl;
    cin >> a >> b;
    cout << "A: " << a << endl << "B: " << b << endl;
    cout << "*Trocando*" << endl;

    // chama a função de troca (a função de troca imprime elas já trocadas)
    troca(&a, &b);

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