#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int S, T;
    cin >> S >> T;

    // Matriz de adjacência para verificação rápida
    vector<vector<bool>> conexao(S + 1, vector<bool>(S + 1, false));

    // Ler os túneis
    for (int i = 0; i < T; i++)
    {
        int X, Y;
        cin >> X >> Y;
        conexao[X][Y] = true;
        conexao[Y][X] = true;
    }

    int P;
    cin >> P;
    int passeios_possiveis = 0;

    // Processar cada sugestão de passeio
    for (int i = 0; i < P; i++)
    {
        int N;
        cin >> N;

        vector<int> passeio(N);
        for (int j = 0; j < N; j++)
        {
            cin >> passeio[j];
        }

        // Verificar se o passeio é possível
        bool possivel = true;
        for (int j = 0; j < N - 1; j++)
        {
            int atual = passeio[j];
            int proximo = passeio[j + 1];

            // Se NÃO existe túnel entre salão atual e próximo
            if (!conexao[atual][proximo])
            {
                possivel = false;
                break;
            }
        }

        if (possivel)
        {
            passeios_possiveis++;
        }
    }

    cout << passeios_possiveis << endl;

    return 0;
}