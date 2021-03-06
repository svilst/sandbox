#include "stdafx.h"
#include <string>
#include <array>
#include <algorithm>
#include <iostream>
#include <functional>
#include <vector>

int main()
{
    std::vector<int> v{ 1, 2, 3, 4, 5};
    auto it = std::find(v.begin(), v.end(), 7);
    auto rit = std::find(v.rbegin(), v.rend(), 7);
    auto base = rit.base();
    --base;

    if (it == v.end())
    std::cout << (it == v.end() ? "end" : *it) << ' ' 
              << *rit << ' ' 
              << *base;

    return 0;
}

