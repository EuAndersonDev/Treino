#include<iostream>
using namespace std;
int main() {
    int a, b, menor, maior;
    cin >> a >> b;
    if (a>b)
    {
        maior = a;
        menor = b;
    } else
    {
        maior = b;
        menor = a;
    }

    for (int i = menor; i <= maior; i++)
    {
        cout << i << endl;
    }
    return 0;
}