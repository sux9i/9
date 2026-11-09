#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    char symbol;
    int R, again;
    do {
        printf("\nВведите символ, которым будет заполнена фигура:\n");
        scanf_s(" %c", &symbol); 
        printf("Введите размер треугольника R:\n");
        scanf_s("%d", &R);
        if (R <= 0) {
            printf("Размер должен быть больше нуля.\n");
        }
        else {
            printf("\nПрямоугольный треугольник:\n\n");
            for (int i = 1; i <= R; i++) {
                for (int j = 1; j <= i; j++) {
                    printf("%c", symbol);
                }
                printf("\n");
            }
        }
        printf("\nПродолжить? (Да - введите любое число, Нет - введите 0):\n");
        scanf_s("%d", &again);
    } while (again != 0);
    return 0;
}