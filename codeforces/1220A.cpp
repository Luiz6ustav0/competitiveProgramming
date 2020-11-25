#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){
    char c;

    int inputLength = -1;
    std::cin >> inputLength;
    
    std::map<char, int> myMap;

    if (inputLength <= 0) {
        std::cout << 0 << std::endl;
        return 0;
    }

    for (int i = 0; i < inputLength; ++i) {
        std::cin >> c;
        if (c == 'n' || c == 'z') myMap[c] += 1;
    } 

    for (int i = 0; i < myMap['n']; ++i)
        std::cout << 1 << ' ';
    
    for (int i = 0; i < myMap['z'] - 1; ++i)
        std:: cout << 0 << ' ';
    
    if (myMap['z'] - 1 >= 0) std::cout << 0;
        
    std::cout << std::endl;
}

