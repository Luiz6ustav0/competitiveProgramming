#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define pb push_back

using namespace std;

bool oneLevelBfsFrom(pair<int,int> &pos, vector<vector<char>> &graph) {
    if ((pos.first == graph.size()-1) || (pos.first == 0) || (pos.second == graph[0].size()-1) || (pos.second == 0)) return true;
    if (pos.second > 0)
        if (graph[pos.first][pos.second-1] == '.') return true; 
    if (pos.second < graph[0].size()-1)    
        if (graph[pos.first][pos.second+1] == '.') return true;
    if (pos.first > 0)
        if (graph[pos.first-1][pos.second] == '.') return true;
    if (pos.first < graph.size()-1)
        if (graph[pos.first+1][pos.second] == '.') return true;
    return false;
}

int main(){

    int m, n;

    cin >> m >> n;
    char val;
    vector<vector<char>> graph(m, vector<char>(n));
    vector<pair<int, int>> pointsToBFS;
    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
           cin >> val;
           graph[i][j] = val;
           if (val == '#') pointsToBFS.push_back({i, j});
        }
    }
    int result = 0;
    for (auto &p : pointsToBFS) {
        if (oneLevelBfsFrom(p, graph)) result++;
    }
    cout << result << endl;
}
