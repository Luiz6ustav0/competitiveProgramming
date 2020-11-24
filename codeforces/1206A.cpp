#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){
    
    int A = -1, B = -1;
    int a_max = -INF;
    int b_max = -INF;
    std::cin >> A;
    for(int i = 0; i < A; ++i) {
        int temp = -1;
        std::cin >> temp;
        a_max = a_max > temp ? a_max : temp;
    }

    std::cin >> B;
    for(int i = 0; i < B; ++i) {
        int temp = -1;
        std::cin >> temp;
        b_max = b_max > temp ? b_max : temp;
    }

    std::cout << a_max << " " << b_max << std::endl;

}

