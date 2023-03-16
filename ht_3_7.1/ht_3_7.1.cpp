#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v = { 1,1,2,5,6,1,2,4 };
    std::sort(v.begin(), v.end(), [](const int& a, const int& b)->bool {return a < b; });
    std::cout << "[IN]: ";
    std::for_each(v.begin(), v.end(), [](const int& a)->void {std::cout << a << " "; });
    std::cout << "\n[OUT]: ";
    auto i = std::unique(v.begin(), v.end());
    while (i != v.end()) i = v.erase(i);
    std::for_each(v.begin(), v.end(), [](const int& a)->void {std::cout << a << " "; });
}
