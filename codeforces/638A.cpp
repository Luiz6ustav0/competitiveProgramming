#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define pb push_back

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main(){
    
    int tests = 0, n = 0;
    cin >> tests;

    for (int i=0; i<tests; ++i) {
        cin >> n;
        int sumA = 0, sumB = 0;
        for (int j=0; j<n/2-1; ++j) sumA += pow(2, j+1);
        sumA += pow(2, n);
        for (int j=n/2; j<n; ++j) sumB += pow(2, j);
        cout << abs(sumA - sumB) <<  endl;
    }

}
