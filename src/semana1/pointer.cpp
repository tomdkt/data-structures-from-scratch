#include <iostream>
#include<stdio.h>

int f(int *a, int n) {
    std::cout << *a << std::endl;
    if (n <= 0) return 0;
    if (*a % 2 == 0) {
        return *a + f(a + 1, n - 1);
    }
    return *a - f(a + 1, n - 1);
}

// int main() {
//     int a[] = {12, 7, 13, 4, 11, 6};
//     printf("%d", f(a, 6));
//     return 0;
// }
