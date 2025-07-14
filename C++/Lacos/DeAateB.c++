#include<iostream>
using namespace std;

int main() {
    int a, b, maior, menor;
    cin >> a >> b;
    if (a>b)
    {
        menor = b;
        maior = a;
    }else
    {
        menor = a;
        maior = b;
    }
    int i = menor;
    while (maior >= i)
    {
        cout << i << endl;
        i++;
    }
    
}