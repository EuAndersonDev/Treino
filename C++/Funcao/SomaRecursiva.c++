#include <iostream>
using namespace std;

int soma(int n){
    if ( n == 0 || n == 1) // Entra no caso base da recursão
    {
        return n;
    }
    return n +soma(n-1); // o numero atual é somado ao numero anterior e assim sucessivamente, até chegar no caso base
}

int main(){
    int n;
    cin >> n;
    int result = soma(n);
    cout << result << " ";
}