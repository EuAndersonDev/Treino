Boa! 🚀 Ter um **“kit de sobrevivência”** de códigos prontos em C++ ajuda demais na OBI. Vou te deixar uma **colinha compacta** com os algoritmos mais usados, bem direto, já pronto pra copiar/colar e adaptar.

---

## 📌 Colinha OBI – C++

### 🔎 Busca Binária (template clássico)

sort(vetor, vetor+tamanho);
reverse(p, p+n);

```cpp
int binary_search(vector<int> &v, int x) {
    int l = 0, r = v.size()-1;
    while(l <= r) {
        int mid = (l + r)/2;
        if(v[mid] == x) return mid; // achou
        else if(v[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1; // não achou
}
```

---

### 🌳 DFS (profundidade) em grafo

```cpp
vector<int> adj[100005];
bool vis[100005];

void dfs(int u) {
    vis[u] = true;
    for(int v : adj[u]) {
        if(!vis[v]) dfs(v);
    }
}
```

---

### 🔄 BFS (largura) em grafo

```cpp
vector<int> adj[100005];
bool vis[100005];
int dist[100005]; // distâncias

void bfs(int s) {
    queue<int> q;
    q.push(s);
    vis[s] = true;
    dist[s] = 0;

    while(!q.empty()) {
        int u = q.front(); q.pop();
        for(int v : adj[u]) {
            if(!vis[v]) {
                vis[v] = true;
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}
```

---

### 📐 Ordenação + Comparator

```cpp
// sort normal
sort(v.begin(), v.end());

// sort com criterio personalizado
sort(v.begin(), v.end(), [](auto &a, auto &b){
    return a.second < b.second; // exemplo
});
```

---

### 💰 Algoritmo Guloso (exemplo de mochila de moedas)

```cpp
int troco(int valor, vector<int> moedas) {
    int qtd = 0;
    sort(moedas.rbegin(), moedas.rend()); // ordem decrescente
    for(int m : moedas) {
        qtd += valor / m;
        valor %= m;
    }
    return qtd;
}
```

---

### ⚡ Prefix Sum (soma acumulada)

```cpp
vector<int> pref(n+1, 0);
for(int i=1; i<=n; i++) {
    pref[i] = pref[i-1] + v[i-1];
}
// soma de [l,r]
int soma = pref[r] - pref[l-1];
```

---

### 🧮 Programação Dinâmica (ex: mochila 0/1)

```cpp
int dp[105][1005]; // dp[i][w] = melhor valor até item i com peso w
for(int i=1; i<=n; i++) {
    for(int w=0; w<=W; w++) {
        dp[i][w] = dp[i-1][w];
        if(w - peso[i] >= 0)
            dp[i][w] = max(dp[i][w], dp[i-1][w-peso[i]] + valor[i]);
    }
}
```

---

### 📊 Dicas rápidas de STL

```cpp
// fila
queue<int> q;

// pilha
stack<int> st;

// prioridade (maior primeiro)
priority_queue<int> pq;

// prioridade (menor primeiro)
priority_queue<int, vector<int>, greater<int>> pq;
```

---

👉 Essa colinha cobre **90% dos problemas clássicos da OBI**: grafos (DFS/BFS), busca binária, guloso, DP básica, prefix sum.
Quer que eu monte uma **versão impressa enxuta (1 página A4)** só com esses templates super resumidos, tipo folha de rascunho?
