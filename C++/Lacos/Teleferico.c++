#include <iostream>
using namespace std;

int main()
{
    int capacidade, alunos;
    cin >> capacidade >> alunos;
    int viagens = (alunos + capacidade - 1) / capacidade;
    cout << viagens << endl;
    return 0;
}