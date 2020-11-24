#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

int main(){
    
    int k = -1;
    std::cin >> k;
    int numMonths = 0;
    int newInput = 0;
    std::vector<int> monthlySize;
   
    while(std::cin >> newInput) {
        monthlySize.push_back(newInput);
    }
    
    std::sort(monthlySize.begin(), monthlySize.end());

    for (int i = 11; i >= 0; --i) {
        if (k <= 0) break;
        numMonths += 1;
        k -= monthlySize[i];        
    }

    if (k <= 0) std::cout << numMonths << std::endl;
    else std::cout << -1 << std::endl;

}
