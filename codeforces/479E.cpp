#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define pb push_back

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

void dfs(int i, bool &mightBeACycle) {
    if (visited[i]) return;
    visited[i] = true;
    if (graph[i].size() == 2 && mightBeACycle);
    else mightBeACycle = false;
    for (int k=0; k<graph[i].size(); ++k)
        if (!visited[graph[i][k]]) dfs(graph[i][k], mightBeACycle);
} 

int main(){
    
    ll n,m, nodei, nodej;
    cin >> n >> m;
    graph = vector<vector<int>>(n+1);
    visited = vector<bool>(n+1);
    
    for (int i=0; i<m; ++i) {
        cin >> nodei >> nodej;
        graph[nodei].push_back(nodej);
        graph[nodej].push_back(nodei);
    }

    int answer = 0;

    for (int i=1; i<n; ++i) {
        if (!visited[i]) {
            bool mightBeACycle = (graph[i].size() == 2);
            if (!visited[i]) dfs(i, mightBeACycle); 
            if (mightBeACycle) answer++;
        }
   }
    
    cout << answer << endl;

}
