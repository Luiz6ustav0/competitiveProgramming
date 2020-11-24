#include <iostream>
#include <vector>

typedef long long ll;

int main(){
    int testCases = 0;
    std::cin >> testCases;
    std::vector<int> columnsV;
    std::vector<int> linesV;
    std::vector<std::pair<int, int>> points;
    for (int i = 0; i < testCases; ++i){
        int j, k;
        std::pair<int, int> p;
        std::cin >> j >> k;
        columnsV.push_back(j);
        linesV.push_back(k);
        std::cin >> p.first >> p.second;
        points.push_back(p);
    }
    
    for (int i = 0; i < testCases; ++i){
        int result = 0;
        std::vector<int> areas;
        
        areas.push_back(points[i].first * linesV[i]);
        areas.push_back((columnsV[i] - points[i].first - 1)*linesV[i]);
        areas.push_back(columnsV[i]*(linesV[i]-points[i].second-1));
        areas.push_back(columnsV[i] * points[i].second);

        for (int i = 0; i<areas.size(); ++i) result = result > areas[i] ? result : areas[i];

        std::cout << result << std::endl;
    }
}

