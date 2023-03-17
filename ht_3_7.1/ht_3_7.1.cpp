#include <iostream>
#include <vector>
#include <algorithm>

template<class T>
std::vector<T> unify(std::vector<T> v) {
    std::sort(v.begin(), v.end(), [](const int& a, const int& b)->bool {return a < b; });
    auto i = std::unique(v.begin(), v.end());
    v.erase(i, v.end());
    return v;
}


int main()
{
    std::vector<int> v = { 1,1,2,5,6,1,2,4 };

    std::cout << "[IN]: ";
    std::for_each(v.begin(), v.end(), [](const int& a)->void {std::cout << a << " "; });

    v = unify(v);

    std::cout << "\n[OUT]: ";
    std::for_each(v.begin(), v.end(), [](const int& a)->void {std::cout << a << " "; });
}
