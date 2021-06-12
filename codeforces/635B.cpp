#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define pb push_back

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main(){
    
    int tests = 0;
    cin >> tests;
    
    ll x = 0;
    short n = 0, m = 0;
    
    for (int i=0; i<tests; ++i) {
        cin >> x >> n >> m;
        while(n > 0 && x > 20) {
            x = x/2 + 10;
            n--;
        }
        x -= m*10;
        if (x <= 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }    

}
