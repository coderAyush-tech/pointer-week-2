#include <stdio.h>

int main() {
    int a[5] = {7, 10, 99, 4, 55};
    int *ptr = &a[0];
 int max = -9999999;

    for (int i=0;i<5;i++) {
        if (*(ptr+i) > max) {
            max =*(ptr+i);
        }
    }

    printf("Max element: %d\n", max);
    return 0;
}