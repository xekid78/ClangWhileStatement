#include <stdio.h>

int main(void) {
    printf("** ケース１ **\n");
    int i = 1;
    while (i <= 5) {
        printf("%dだよ。\n", i);
        i++;
    }
    printf("\n");

    printf("** ケース２ **\n");
    i = 5;
    while (i >= 1) {
        printf("%dだよ。\n", i);
        i--;
    }
    return 0;
}
