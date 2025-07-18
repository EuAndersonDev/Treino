#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;
    if(n == 0){
        cout << 0 << endl;
    } else if(n == 1){
        cout << 1 << endl;
    } else {
        int penultimo = 1, ultimo = 1;
        cout << "1 1 " ;
        for (int i = 0; i < (n - 2); i++)
        {
            cout << penultimo + ultimo << " ";
            int aux = penultimo;
            penultimo = ultimo;
            ultimo = penultimo + aux;
        }
        
    }
    return 0;

}