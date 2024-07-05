#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct logic{
    int a;
    int b;
    int and;        //Логическое И (&&)
    int or;         //Логическое ИЛИ (||)
    int not_a;      //Логическое НЕ (!) для переменной а
    int not_b;      //Логическое НЕ (!) для переменной b

}logic_t;

int main(){
    //логические операции для чисел в двоичной системе
    printf("Введите через пробел два числа для вычисления логических операций ");
    scanf("%d %d", &(logic_t.a), &(logic_t.b));
    printf("Вы ввели данне: %d и %d",logic_t.a, logic_t.b);
    logic_t.and = logic_t.a && logic_t.b;
    logic_t.or = logic_t.a || logic_t.b;
    logic_t.not_a = !logic_t.a;
    logic_t.not_b = !logic_t.b;
    
    printf("\n");
    printf("Логическое И (&&): %d",logic_t.and);
    printf("\n");
    printf("Логическое ИЛИ (||): %d",logic_t.or);
    printf("\n");
    printf("Логическое НЕ (!) для переменной а: %d",logic_t.not_a);
    printf("\n");
    printf("Логическое НЕ (!) для переменной b: %d",logic_t.not_b);

    return 0;
}