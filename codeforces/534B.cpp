#include <bits/stdc++.h>
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

#define pb push_back

using namespace std;

int main() {
    string s;
    int numPlays = 0, i;
    
    stack<int> mystack;
    cin >> s;

    mystack.push(s[0]);

    for (i=1; i<s.size(); i++) {
        if (!mystack.empty() && s[i] == mystack.top()) {
            mystack.pop();
            numPlays++;
        } else mystack.push(s[i]);
    }

    if (numPlays % 2 == 0) cout << "No" << endl;
    else cout << "Yes" << endl;
}
