#include <bits/stdc++.h>
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

#define pb push_back

using namespace std;

int main() {
    int numberOfTests = 0;
    int lenArr = 0, inputNum = 0;

    std::cin >> numberOfTests;
    
    for (int i = 0; i < numberOfTests; ++i) {
        cin >> lenArr;
        vector<int> vec;
        for(int j = 0; j < lenArr; ++j) {
            cin >> inputNum;
            vec.pb(inputNum);
        }
        sort(vec.begin(), vec.end());
        int vecSize = vec.size(); 
        if (vecSize%2 == 0) {
            for (int beg=vecSize/2-1, end=vecSize/2; beg>=0 && end<vecSize; beg--, end++) {
                cout << vec[beg] << " " << vec[end] << " ";
            }
        } else {
            for (int beg=vecSize/2, end=vecSize/2+1; beg>=0 && end<vecSize; beg--, end++) {
                cout << vec[beg] << " " << vec[end] << " ";
            }
            cout << vec[0] << endl;
        }
    }
}
