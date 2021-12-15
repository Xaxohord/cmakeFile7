#include <math.h>
#include <iostream>

void Read(int n, int m, int mas[100][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> mas[i][j];
        }
    }
}

void Write(int n, int m, int mas[100][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << mas[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void SWAP(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}

bool Prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0)
            return false;
    }
    return true;
}

int MinStol(int n, int m, int mas[100][100]) {
    int a = 2147483647, ind = 0;
    for (int i = 0; i < n; ++i) {
        if (mas[i][m] < a) {
            ind = i;
            a = mas[i][m];
        }
    }
    return ind;
}