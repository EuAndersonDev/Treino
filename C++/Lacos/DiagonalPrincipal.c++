#include<iostream>
using namespace std;

int main(){
    int n = 10, aux = 0;
    string letra = "#";
    for (int i = 0; i < n; i++){ //coluna
        for (int i = 0; i < n; i++){ // linha
            
            if (i == aux)
            {
                cout << letra << " ";
            } else{
                cout << "%" <<  " ";
            }
        }
        aux++;
        cout << " " << endl;
    }
    return 0;

}