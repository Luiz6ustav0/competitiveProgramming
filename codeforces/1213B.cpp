#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

int main(){
    int testCases = 0;
    std::cin >> testCases;
    std::vector<std::vector<int>> a;
    int h = 0;
    for (int i = 0; i<testCases; ++i) {
        std::cin >> h;
        std::vector<int> temp;
        for (int k = 0; k < h; ++k) {
            int z;
            std::cin >> z;
            temp.push_back(z);
        }
        a.push_back(temp);
    }

    for (int i = 0; i < testCases; ++i){
        int result = 0;
        int min = a[i][a[i].size()-1];
        for (int j = a[i].size()-2; j>=0; --j){
            if (a[i][j] > min) result++;
            min = std::min(a[i][j], min);
        }
        std::cout << result << std::endl;
    }
}

