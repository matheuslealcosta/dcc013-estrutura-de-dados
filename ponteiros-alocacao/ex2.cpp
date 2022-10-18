/*
1.Faça um programa que realize as seguintes operaçoes:
I Declare um ponteiro para inteiro pt.
I Imprima o endereço de pt.
I Crie uma variavel inteira x.
I Leia um valor para x.
I Faça com que pt aponte para x.
I Imprima o conteudo da variavel pt.
I Imprima o endereço de x.
I Imprima o conteúdo de x.
I Usando apenas o ponteiro pt multiplique x por 10 e altere
o seu valor.
I Imprima o conteudo apontado por pt.
I Some 10 a variavel pt.
*/

#include <iostream>
using namespace std;

int main()
{    
// não há comentários pois a questão já pauta linha por linha
    int *pt;
    cout << "valor de pt:" << pt << endl;
    int x;
    cout << "digite um valor para x" << endl;
    cin >> x;
    pt = &x;
    cout << "valor de pt que aponta para x:" << pt << endl;
    cout << "endereco de x: " << &x << endl;
    cout << "valor de x: "<< x << endl;
    (*pt)*=10;
    cout << "valor do conteudo que pt aponta apos multiplicar por 10: " << *pt << endl;
    (*pt)+=10;
    cout << "valor do conteudo que pt aponta apos somar 10: " << *pt << endl;


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