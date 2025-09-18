#include <stdio.h>

int main() {
    int res = 0;
    int cont = 1;

    while (cont <= 10) {
        res = res + cont;
        printf("%d\n", res);
        cont++;
    }

    return 0;
}
