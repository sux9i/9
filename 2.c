#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    int num,repeat,count;
    do {
        count = 0;
        printf("\nВведите целое число: ");
        scanf_s("%d", &num);
        while (num > 0)
        {
            if (num%10 > 5) 
            {
                count++;
            }
            num = num / 10;
        }
        printf("Количество цифр больше 5: %d\n", count);
        printf("Продолжить? (Да - любое число, Нет - 0): ");
        scanf_s("%d", &repeat);
    } while (repeat != 0);
    return 0;
}