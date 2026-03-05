#include <stdio.h>

int main() {
    char str[256];
    int i, sum = 0;

    printf("Enter input: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            sum += str[i] - '0';
        }
    }

    printf("Sum of digit char: %d\n", sum);

    return 0;
}
