#include <iostream>
using namespace std;
int main(){
    int n, soma;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
       soma += i * i; 
    }
    cout << soma << endl;
    return 0;
}