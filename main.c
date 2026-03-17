#include <stdio.h>

int main(void) {
    const char str[200] = "Hello, world?";
    const char *str_buf = str;

    int length = 0;

    while (*str_buf++) {
        length++;
    }
    printf("size of string - %d, and bytes - %zu", length, sizeof(str));

    return 0;
}