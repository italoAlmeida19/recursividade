#include <iostream>

using namespace std;

void imprimeIntervalo(int a, int b, int inc)
{
    if(a <= b)
    {
        cout << a << endl;
        imprimeIntervalo(a + inc, b, inc);
    }
}

void imprimeDecrescente(int n)
{
    if(n >= 0)
    {
        cout << n << endl;
        imprimeDecrescente(n - 1);
    }
}

float soma(int n, float vet[])
{
    if(n == 1)
    {
        return vet[0];
    }
    else
    {
        return vet[n - 1] + soma(n - 1, vet);
    }
}

float menor(int n, float vet[])
{
    if(n == 1)
    {
        return vet[0];
    }
    else
    {
        if(vet[n - 1] < menor(n - 1, vet))
            return vet[n - 1];
    }
}

int contaPares(int n, int vet[])
{
    if(n == 1)
    {
        if(vet[0] % 2 == 0)
        {
            return 1;
        }
    }
    else
    {
        if(vet[n - 1] % 2 == 0)
            return contaPares(n - 1, vet) + 1;
        else
            contaPares(n - 1, vet);
    }
}

int main()
{
    int vet[4] = {10, 3, 7, 5};
    int n = 4;
    //cout << soma(n, vet);
    //imprimeIntervalo(1, 8, 2);
    //imprimeDecrescente(10);
    //cout << menor(n, vet);
    cout << contaPares(n, vet);
    return 0;
}


