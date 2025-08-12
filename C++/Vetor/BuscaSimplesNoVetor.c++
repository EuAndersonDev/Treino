#include <iostream>
using namespace std;
int main(){
    int v[10];
    for (int i = 0; i < 10; i++)
    {
       cin >> v[i];
    }
    int n, qtd = 0;
    cin >> n;
    for (int i = 0; i < 10; i++)
    {
        if (v[i] == n)
        {
            qtd++;
        }
    }
    if (qtd>0)
    {
        cout << qtd << endl;
        for (int i = 0; i < 10; i++)
        {
            if (v[i] == n)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    } else{
        cout << "Mia X" << endl;
    }
    
    return 0;
    
    

}