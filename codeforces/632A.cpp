#include <bits/stdc++.h>
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

int main() {
    int numberOfTests = 0;
    int lines = 0, columns = 0;

    std::cin >> numberOfTests;

    char black = 'B', white = 'W';

    for (int i = 0; i < numberOfTests; ++i) {
        std::cin >> lines >> columns;
        for (int inside_i = 0; inside_i < lines - 1; ++inside_i) {
            for (int inside_j = 0; inside_j < columns; inside_j++) {
                std::cout << black;
            }
            std::cout << std::endl;
        }
        for (int lastLine = 0; lastLine < columns - 1; lastLine++) {
            std::cout << black;
        }
        std::cout << white << std::endl;
    }
}
