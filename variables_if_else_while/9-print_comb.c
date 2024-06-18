#include <stdio.h>

int main() {
    int i = 0;
    while (i <= 9) {
        int j = 0;
        while (j <= 9) {
            putchar('0' + i);
            putchar('0' + j);
            if (i != 9 || j != 9) {  // To avoid printing comma after the last number
                putchar(','); 
                putchar(' ');
            }
            j++;
        }
        i++;
    }
    putchar('\n');
    return 0;
}
