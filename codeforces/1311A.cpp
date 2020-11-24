#include <iostream>
#include <vector>

typedef long long ll;

int main(){
    int testCases = 0;
    std::cin >> testCases;
    std::vector<int> a;
    std::vector<int> b; 
    int j = 0, k = 0;
    for (int i = 0; i<testCases; ++i) {
        std::cin >> j >> k;
        a.push_back(j);      
        b.push_back(k); 
    }
    for (int i = 0; i < testCases; ++i){
        int num1 = a[i], num2 = b[i], result = 0;
        
        if (num1 == num2) result = 0;
        else {
            if (num1 < num2){
                int dif = num2-num1;
                if (dif%2 == 0) result = 2;
                else result = 1; 
            } else {
                int dif = num1-num2;
                if (dif%2 == 0) result = 1;
                else result = 2;
            }
        }  
        std::cout << result << std::endl;
    }    
}

