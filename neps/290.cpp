#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define pb push_back

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main(){

    int testCount = 1;
    vector<int> airports(101);

    int a=0, v=0;
    cin >> a >> v;
    while(a!= 0 && v!=0) {
        int greatestNumOfFlights = 0;
        int flightTo, flightFrom;
        for (int i=0; i<v; ++i) {
            cin >> flightFrom >> flightTo;
            airports[flightFrom] += 1;
            airports[flightTo] += 1;
        }

        for (int i=1; i<=a; ++i) {
            if (airports[i] > greatestNumOfFlights) greatestNumOfFlights = airports[i];
        }
        
        cout << "Teste " << testCount << endl;
        for (int i=1; i<=a; ++i) {
            if (airports[i] == greatestNumOfFlights) cout << i << " ";
        }
        
        cout << endl << endl;

        airports = vector<int>(101);

        testCount++;
        cin >> a >> v;
    }
    return 0;
}
