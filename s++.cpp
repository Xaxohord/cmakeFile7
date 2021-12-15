#include <iostream>
#include <Math.h>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <windows.h>
#include <vector>
#include "Header.h"

using namespace std;

#define N 100
#define M 100
int mas[N][M];


int main() {
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    int n, m, S1 = 0, S2 = 0;
    std::cin >> n >> m;
    Read(n, m, mas);

    bool flag;
    for (int i = 0; i < n - 1; i++) {
        for (int i1 = i + 1; i1 < n; i1++) {
            flag = true;
            for (int j = 0; j < m; ++j) {
                if (mas[i][j] != mas[i1][j])
                    flag = false;
            }
            if (flag)
                break;
        }
        if (flag)
            break;
    }

    int Max = -2147483646;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mas[i][j] > Max && Prime(mas[i][j]) == true)
                Max = mas[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        mas[MinStol(n, i, mas)][i] = Max;
    }

    Write(n, m, mas);
    return 0;
}
