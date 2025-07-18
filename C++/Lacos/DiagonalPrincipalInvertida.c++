#include <iostream>
using namespace std;


int main(){
    int n =10, aux=10;


    for (int i = 0; i < n; i++){
        for (int i = 0; i < n; i++){
            if (i == aux -1)
            {
                cout << "#" << " ";
            }else{
                cout << "%" << " ";
            }
        }
        cout << " " << endl;
        aux--;
    }

    return 0;

    

}