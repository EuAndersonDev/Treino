#include <iostream>
#include <algorithm>
using namespace std;

int p[100005], k;

// Função que verifica se é possível cortar 'tamanho' para 'n' pessoas
bool podeCortar(int tamanho, int n)
{
    int fatias = 0;
    for (int i = 0; i < k; i++)
    {
        fatias += p[i] / tamanho; // Quantas fatias conseguimos do pão i
    }
    return fatias >= n; // Se conseguimos pelo menos n fatias
}

int main()
{
    int n;
    cin >> n; // Número de pessoas
    cin >> k; // Número de pães
    for (int i = 0; i < k; i++)
        cin >> p[i]; // Tamanho de cada pão

    // Busca binária na resposta (tamanho da fatia)
    int esquerda = 1;    // Menor tamanho possível
    int direita = 10000; // Maior tamanho possível
    int resposta = 0;

    while (esquerda <= direita)
    {
        int meio = (esquerda + direita) / 2;

        if (podeCortar(meio, n))
        {
            resposta = meio; // Se conseguimos, tentamos um tamanho maior
            esquerda = meio + 1;
        }
        else
        {
            direita = meio - 1; // Se não conseguimos, tentamos um tamanho menor
        }
    }

    cout << resposta << endl;
    return 0;
}