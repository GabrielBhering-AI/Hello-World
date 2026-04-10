#include <stdio.h>

int main(){
    int n1 = 10 + 20;
    int n2 = n1 * 5;
    int n3 = n1 / 2;
    int n4 = n1 - n2 * n3;

    printf("n1 = %d, n2 = %d, n3 = %d, n4 = %d\n", n1, n2, n3, n4);

    return 0;
}