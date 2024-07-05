#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

struct arithmetic{
    int a;
    int b;
    int sum;        //Сложение (+)
    int difference; //Вычитание (-)
    int product;    //Умножение (*)
    int quotient;   //Деление (/)
    int remainder;  //Остаток от деления (%)
}arithmetic_t;

int main(){
    printf("Введите через пробел два натуральных числа для вычисления арифметических операций ");
    scanf("%d %d", &(arithmetic_t.a), &(arithmetic_t.b));
    printf("Вы ввели данне: %d и %d",arithmetic_t.a, arithmetic_t.b);
    arithmetic_t.sum = arithmetic_t.a + arithmetic_t.b;
    arithmetic_t.difference = arithmetic_t.a - arithmetic_t.b;
    arithmetic_t.product = arithmetic_t.a * arithmetic_t.b;
    arithmetic_t.quotient = arithmetic_t.a / arithmetic_t.b;
    arithmetic_t.remainder = arithmetic_t.a % arithmetic_t.b;

    printf("\n");
    printf("Сложение (+): %d",arithmetic_t.sum);
    printf("\n");
    printf("Вычитание (-): %d",arithmetic_t.difference);
    printf("\n");
    printf("Умножение (*): %d",arithmetic_t.product);
    printf("\n");
    printf("Деление (/): %d",arithmetic_t.quotient);
    printf("\n");
    printf("Остаток от деления: %d",arithmetic_t.remainder);
    return 0;
}