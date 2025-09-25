#include <iostream>
using namespace std;
#include <algorithm>


int main(){
    int k, n;
    cin >> n >> k;
    int v[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v, v + n);
    int soma = 0, resultado = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] + soma < k)
        {
            resultado++;
            soma = v[i] + soma;
        }
        else
        {
            break;
        }
    }
    cout << resultado << endl;
}