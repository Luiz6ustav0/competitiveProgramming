#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){
    
    int A = -1, B = -1;

    std::cin >> A;
    int vec_A[A];
    for(int i = 0; i < A; ++i) {
        int temp = -1;
        std::cin >> temp;
        vec_A[i] = temp;
    }

    std::cin >> B;
    int vec_B[B];
    for(int i = 0; i < B; ++i) {
        int temp = -1;
        std::cin >> temp;
        vec_B[i] = temp;
    }

    std::sort(vec_A, vec_A + A);
    std::sort(vec_B, vec_B + B);
    
    std::cout << vec_A[A-1] << " " << vec_B[B-1] << std::endl;

}

