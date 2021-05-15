#include <bits/stdc++.h>
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

typedef long long ll;

int main() {

    int shoeSize = -1;
    char foot = ' ';
    int numberOfLines = 0;
    std::unordered_map<int, std::unordered_map<char, int>> shoeData;

    std::cin >> numberOfLines;
    for (int lineIndex = 0; lineIndex < numberOfLines; ++lineIndex) {
        std::cin >> shoeSize >> foot;
        shoeData[shoeSize][foot] += 1;
    }
    
    int totalCount = 0;

    for (auto &shoe : shoeData) {
        if (shoe.second['E'] == shoe.second['D']) {
            totalCount += shoe.second['E'];
        } else if (shoe.second['E'] > shoe.second['D']) {
            totalCount += shoe.second['D'];
        } else totalCount += shoe.second['E'];
    }

    std::cout << totalCount << std::endl;

    return 0;
}
