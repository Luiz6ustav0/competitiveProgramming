#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define pb push_back

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main(){

    long n; cin >> n;
    
    vector<long> vec(11);
    vec[0] = 1;
    for (int i=1; i<11; ++i) vec[i] = i*vec[i-1];

    int answer = 0;
    for (int i=10; i>=0; --i) {
        if (vec[i] <= n) {
            int fits = n/vec[i];
            answer += fits;
            n -= vec[i]*fits;
        }
        if (n==0) break;
    }
    cout << answer << endl;
}
