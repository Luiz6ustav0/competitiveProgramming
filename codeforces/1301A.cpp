#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){
    std::vector<std::vector<std::string>> testCases;
    int numTestCases = 0;
    std::cin >> numTestCases;

    for (int i = 0; i < numTestCases; ++i) {
        std::vector<std::string> temp;
        std::string a, b, c;
        std::cin >> a >> b >> c;
        temp.push_back(a); temp.push_back(b); temp.push_back(c);
        testCases.push_back(temp);
    }
     
    for (int i = 0; i < numTestCases; ++i) {
        bool check = false;
        for(int j = 0; j < testCases[i][0].size(); ++j) {
            if (testCases[i][2][j] == testCases[i][1][j]) {
                testCases[i][0][j] = testCases[i][2][j];
            } else if (testCases[i][2][j] == testCases[i][0][j]) {
                testCases[i][1][j] = testCases[i][2][j];
            } else {
                std::cout << "NO" << std::endl;
                check = true;
                break;
            }
        }
        if (testCases[i][0] == testCases[i][1] && !check) std::cout << "YES" << std::endl;
    }

    return 0;
}
