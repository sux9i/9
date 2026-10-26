#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    for (int row = 1; row <= 5; row++) {
        for (int col = 1; col <= row; col++) 
        {
            printf("%3d", 5);
        }
        printf("\n");
    }
    return 0;
}