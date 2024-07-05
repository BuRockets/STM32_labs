#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

float* sort(float* array, int N){
    for(int i = 0; i< N-1; i++){
        for(int j = 0; j < N-1-i; j++){
            if(array[j]>array[j+1]){
                float c;
                c = array[j+1];
                array[j+1] = array[j];
                array[j] = c; 
            }
        }
    }
    return array;
}

int main(){

    int N;
    printf("Введите размер массива: ");
    scanf("%d", &N);

    float array[N];

    printf("Введите %d целых чисел через пробел: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%f", &array[i]);
    }

    printf("Вы ввели следующий массив: ");
    for (int i = 0; i < N; i++) {
        printf("%f ", array[i]);
    }

    printf("\n");
    float* sort_array = sort(array,N);
    printf("А вот отсортированный массив: ");
    for(int i = 0; i < N; i++){
        printf("%f ",(sort_array[N-i-1]));
    }
    return 0;
}