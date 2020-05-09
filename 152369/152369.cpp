#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int N = 0;
vector < vector<int> > g;

int bfs(int s){
    int k = 0;
    queue<int> q;
    q.push (s);
    vector<bool> used (N);
    vector<bool> kon (N);
    used[s] = true;
    kon[s] = true;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (size_t i=0; i<g[v].size(); ++i) {
            int to = g[v][i];
            if (!used[to]) {
                used[to] = true;
                q.push (to);
            }
            if(kon[v])
                kon[v] = false;
            if(!kon[to])
                kon[to] = true;
        }
    }
    for (size_t i=0; i<kon.size(); ++i)
        if (kon[i] == true)
            k++;
    
    return k;
}

int main(){
    
    int s = 0, i = 0;
    int a = 0, b = 0;
    cin >> N >> s;

    for (i=1; i < N; i++) {
        cin >> a >> b;
        g[a].push_back(b);
    }

    cout << bfs(s) << endl;

    return 0;
}