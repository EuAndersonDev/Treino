#include <iostream>
using namespace std;

int A[100005], K;

int valor(int x){
    if (A[x]+A[x+1] == K) return 1;
    return 0;
}

int main(){
    int N;
    cin >> N;
    for (int i=0; i<N; i++)cin >> A[i];
    cin >> K;
    int L=0;
    int R=N;
    int M;
    while(L != R){
        M = (L+R)/2;
        if (valor(M)) R = M;
        else L = M+1;

    }
    cout << A[L] << " " << A[R+1] << endl;
    return 0;
        
}