#include <iostream>
using namespace std;

int fib(int n)
{ // declaro a função fib que recebe um inteiro como parâmetro
    if (n <= 1)
        return n;                   // se ele for menor que 2, a função deve retornar ele mesmo
    return fib(n - 1) + fib(n - 2); // se não, deve retornar a soma dos dois termos anteriores da sequência
}

int main()
{
    int num; // declaro o inteiro num
    cin >> num; // leio o valor de num
    int result = fib(num);
    cout << result << " " << endl; // imprimo uma única linha com o valor de fib(num)
    return 0;
}