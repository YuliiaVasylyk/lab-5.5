// Lab_05_5.cpp
// <Василик Юлія>
// Лабораторна робота №5.5
// Обчислення сум та добутків за допомогою рекурсії
// Варіант 2


#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int f(const int n, int level, int& depth)
{
    if (level > depth)
        depth = level;
    if (n == 0)
        return 0;
    else
        return 1 + f(n & (n - 1), level + 1, depth);
}

int main()
{
    int n, depth;
    cout << "n = "; cin >> n;
    cout << "f = " << f(n, 1, depth) << endl;
    cout << "depth = " << depth << endl;

    return 0;
}
