#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        int qtd = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                qtd++;

            }
        }
        if (qtd == 1)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    return 0;

}