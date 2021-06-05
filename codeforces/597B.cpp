#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define pb push_back

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

typedef pair<int, int> pii;

int main(){

    int numOrders; cin >> numOrders;
    vector<pii> vec;

    for (int i=0; i<numOrders; ++i) {
        int f, s; cin >> f >> s;
        vec.pb({f, s});
    }
    
    sort(vec.begin(), vec.end(), [](pii &a, pii&b) -> bool {
                                     return a.second < b.second;
                                }
        );
    
    int answer = 1;
    pii current_last = vec[0];
    for (int i=1; i<vec.size(); ++i) {
        if (vec[i].first > current_last.second) {
            answer++;
            current_last = vec[i];
        }
    }    

    cout << answer << endl;
    
}
