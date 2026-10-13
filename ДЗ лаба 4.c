#include <stdio.h>  
#include <locale.h>
int main() {

    setlocale(LC_ALL, "Russian");

    int A, B;


    printf("Введите значение A: ");
    scanf_s("%d", &A);

    printf("Введите значение B: ");
    scanf_s("%d", &B);


    if ((A % 2) ^ (B % 2)) {
        printf("Пароль верный!\n");
    }
    else {
        printf("Ппароль неверный.\n");
    }

    return 0;
}
