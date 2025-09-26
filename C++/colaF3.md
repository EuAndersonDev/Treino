Claro! Vou refazer toda a revisão em C++. Aqui está o guia completo:

## 📊 Algoritmos e Tópicos Mais Frequentes na OBI (C++)

### 1. **Busca em Grafos (DFS e BFS) - ABSOLUTAMENTE ESSENCIAIS**
**Quando usar:** Problemas de conectividade, componentes conexos, menor caminho em grafos não-ponderados, flood fill.

```cpp
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

// BFS - Menor caminho em grafo não-ponderado
int bfs(vector<vector<int>>& grafo, int inicio, int destino, int n) {
    vector<bool> visitado(n+1, false);
    vector<int> distancia(n+1, 0);
    queue<int> fila;
    
    fila.push(inicio);
    visitado[inicio] = true;
    
    while (!fila.empty()) {
        int atual = fila.front();
        fila.pop();
        
        if (atual == destino) {
            return distancia[atual];
        }
        
        for (int vizinho : grafo[atual]) {
            if (!visitado[vizinho]) {
                visitado[vizinho] = true;
                distancia[vizinho] = distancia[atual] + 1;
                fila.push(vizinho);
            }
        }
    }
    return -1; // Não alcançável
}

// DFS - Para conectividade e componentes
void dfs(vector<vector<int>>& grafo, int u, vector<bool>& visitado) {
    visitado[u] = true;
    for (int v : grafo[u]) {
        if (!visitado[v]) {
            dfs(grafo, v, visitado);
        }
    }
}
```

### 2. **Programação Dinâmica (DP) - MUITO IMPORTANTE**
**Problemas clássicos:**
- Fibonacci (só que otimizado)
- Subconjunto de soma máxima
- Mochila (0/1 knapsack)
- Sequência comum mais longa (LCS)

```cpp
// DP da Mochila - exemplo clássico
int mochila(vector<int>& pesos, vector<int>& valores, int capacidade) {
    int n = pesos.size();
    vector<vector<int>> dp(n+1, vector<int>(capacidade+1, 0));
    
    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= capacidade; w++) {
            if (pesos[i-1] <= w) {
                dp[i][w] = max(dp[i-1][w], 
                              valores[i-1] + dp[i-1][w - pesos[i-1]]);
            } else {
                dp[i][w] = dp[i-1][w];
            }
        }
    }
    return dp[n][capacidade];
}

// Fibonacci com DP (bottom-up)
long long fibonacci(int n) {
    if (n <= 1) return n;
    vector<long long> dp(n+1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
```

### 3. **Algoritmos Gulosos (Greedy)**
**Quando usar:** Problemas de otimização onde escolhas locais ótimas levam à solução global ótima.

```cpp
// Problema do Troco - menor número de moedas
int troco_guloso(vector<int>& moedas, int valor) {
    sort(moedas.rbegin(), moedas.rend()); // ordena decrescente
    int count = 0;
    for (int moeda : moedas) {
        while (valor >= moeda) {
            valor -= moeda;
            count++;
        }
    }
    return count;
}
```

### 4. **Ordenação e Busca Binária**
**Busca Binária é SUPER importante:**

```cpp
#include <algorithm>
#include <vector>
using namespace std;

// Busca binária - encontrar elemento
int busca_binaria(vector<int>& arr, int alvo) {
    int esq = 0, dir = arr.size() - 1;
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2; // evita overflow
        if (arr[meio] == alvo) {
            return meio;
        } else if (arr[meio] < alvo) {
            esq = meio + 1;
        } else {
            dir = meio - 1;
        }
    }
    return -1; // não encontrado
}

// Binary Search the Answer - paradigma comum
// Exemplo: encontrar o menor valor possível que satisfaz uma condição
bool pode_resolver(int valor, vector<int>& dados) {
    // implemente a verificação aqui
    return true; // ou false
}

int busca_resposta(int menor, int maior, vector<int>& dados) {
    int esq = menor, dir = maior;
    int resposta = maior;
    
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2;
        if (pode_resolver(meio, dados)) {
            resposta = meio;
            dir = meio - 1; // busca um valor menor
        } else {
            esq = meio + 1;
        }
    }
    return resposta;
}
```

### 5. **Manipulação de Bits**
**Operações básicas que você DEVE saber:**

```cpp
// Operações de bits essenciais
void operacoes_bits() {
    int x = 13; // 1101 em binário
    
    // Verificar se o i-ésimo bit está ligado
    int i = 2;
    bool bit_ligado = (x >> i) & 1;
    
    // Ligar o i-ésimo bit
    x = x | (1 << i);
    
    // Desligar o i-ésimo bit
    x = x & ~(1 << i);
    
    // Inverter o i-ésimo bit
    x = x ^ (1 << i);
    
    // Verificar se número é potência de 2
    bool eh_potencia2 = (x & (x - 1)) == 0;
}
```

### 6. **Estruturas de Dados Básicas**
**Saber usar eficientemente:**

```cpp
#include <queue>
#include <stack>
#include <set>
#include <map>

void estruturas_dados() {
    // Pilha (LIFO)
    stack<int> pilha;
    pilha.push(10);
    int topo = pilha.top();
    pilha.pop();
    
    // Fila (FIFO)
    queue<int> fila;
    fila.push(10);
    int frente = fila.front();
    fila.pop();
    
    // Fila de prioridade (Heap)
    priority_queue<int> max_heap; // maior primeiro
    priority_queue<int, vector<int>, greater<int>> min_heap; // menor primeiro
    
    // Set (conjunto ordenado)
    set<int> conjunto;
    conjunto.insert(10);
    if (conjunto.find(10) != conjunto.end()) {
        // elemento encontrado
    }
    
    // Map (dicionário)
    map<string, int> mapa;
    mapa["chave"] = 10;
}
```

### 7. **Matemática Computacional**
**Conceitos frequentes:**

```cpp
#include <cmath>
#include <algorithm>

// MDC (GCD) - Algoritmo de Euclides
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// MMC (LCM)
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

// Crivo de Eratóstenes - números primos
vector<bool> crivo_eratostenes(int n) {
    vector<bool> eh_primo(n+1, true);
    eh_primo[0] = eh_primo[1] = false;
    
    for (int i = 2; i * i <= n; i++) {
        if (eh_primo[i]) {
            for (int j = i * i; j <= n; j += i) {
                eh_primo[j] = false;
            }
        }
    }
    return eh_primo;
}

// Exponenciação modular rápida
long long exp_rapida(long long base, long long expoente, long long mod) {
    long long resultado = 1;
    base %= mod;
    
    while (expoente > 0) {
        if (expoente & 1) { // expoente ímpar
            resultado = (resultado * base) % mod;
        }
        base = (base * base) % mod;
        expoente >>= 1; // divide por 2
    }
    return resultado;
}
```

## 🎯 Estratégia por Nível de Dificuldade

### Problemas Fáceis (Garantir pontos):
- **Busca completa/força bruta** (quando N é pequeno)
- **Simulação direta** do problema
- **Matemática básica** e contagem

### Problemas Médios:
- **DFS/BFS** em grafos implícitos/explícitos
- **Programação dinâmica** simples
- **Algoritmos gulosos** bem estabelecidos

### Problemas Difíceis:
- **DP mais complexa** (com estado multidimensional)
- **Busca binária + verificação** (paradigma "binary search the answer")
- **Grafos** com componentes mais complexos

## ⚠️ Armadilhas Comuns - CUIDADO!

1. **Estouro de inteiro:** Use `long long` quando necessário
2. **Limites de array:** Indexação 1-based vs 0-based
3. **Laços infinitos** em DFS/BFS: Sempre marcar como visitado ANTES de processar
4. **Problema de precisão** em floats: Prefira trabalhar com inteiros quando possível

## 🚀 Template Básico para a Prova

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cmath>
#include <cstring>
using namespace std;

// Definições para facilitar
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii;

// Funções úteis
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast_io();
    
    // Seu código aqui
    int n;
    cin >> n;
    
    // Processamento
    vector<int> dados(n);
    for (int i = 0; i < n; i++) {
        cin >> dados[i];
    }
    
    // Ordenar se necessário
    sort(dados.begin(), dados.end());
    
    // Saída
    cout << "Resultado" << endl;
    
    return 0;
}
```

## 📝 Checklist Mental Durante a Prova

Para cada problema, pergunte:
- [ ] "Consigo resolver com força bruta?" (Se N ≤ 20, talvez bitmask)
- [ ] "É um problema de grafo?" (Se sim, DFS/BFS/Dijkstra)
- [ ] "Tem subestrutura ótima?" (Se sim, programação dinâmica)
- [ ] "Posso usar busca binária?" (Problemas de minimax/maximin)
- [ ] "Uma estratégia gulosa óbvia funciona?"

## 🔧 Dicas de Debug em C++

```cpp
// Debug rápido - descomente para debug, comente para submeter
#define DEBUG
#ifdef DEBUG
#define debug(x) cout << #x << " = " << x << endl
#else
#define debug(x)
#endif

// Ou use assim:
void debug_vector(vector<int>& v) {
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}
```

---

**Lembre-se:** Na hora da prova, comece pelos problemas que parecem mais familiares. Leia TODOS os problemas antes de escolher por qual começar.

**Boa sorte na OBI!** Você está bem preparado! 🏆