#include <stdio.h>  
#include <locale.h>
int main() {
    
    setlocale(LC_ALL, "Russian");

    int A, B;

    
    printf("Введите число A: ");
    scanf_s("%d", &A);

    printf("Введите число B: ");
    scanf_s("%d", &B);

    
    if (( A % 2) ^ (B % 2)) {
        printf("Пароль активен!\n");
    }
    else {
        printf("Пароль НЕ активен.\n");
    }

    return 0;
}