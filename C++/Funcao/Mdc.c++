#include <cstdio> // printf e scanf

int mdc(int x, int y)
{ // declaro a função int mdc que recebe dois inteiros

    if (x < y)
    { // se x for menor que y

        // troco os valores de x e y, com o auxílio da variável int tmp
        int tmp = y;
        y = x;
        x = tmp;
    }

    if ((x % y) == 0)
        return y; // se x for múltiplo de y, mdc(x,y)=y

    return mdc(y, x % y); // se não, mdc(x,y)=mdc(y, x%y)
}

int main()
{

    int n, m; // declaro as variáveis n e m

    scanf("%d %d", &n, &m); // leio os valores de n e m

    printf("%d\n", mdc(n, m)); // imprimo o valor de mdc(n,m)

    return 0;
}