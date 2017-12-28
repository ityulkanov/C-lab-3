#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define N 128
#define MAX_LENGTH 200
//создаем структуру
struct counter_struct {
    int symbolCode;
    int symbolCounter;
};

int compare(const void *a, const void *b) {
    struct counter_struct *p1 = (struct counter_struct *)a;
    struct counter_struct *p2 = (struct counter_struct *)b;
    
    if (p1->symbolCounter > p2->symbolCounter)
    {
        return -1;
    }
    else if (p1->symbolCounter < p2->symbolCounter)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Главная функция программы
int main () {
    
    struct counter_struct cp[N];  //Инициализируем структуру
    char str[MAX_LENGTH] = { 0 }; // И строку
//    прописываем данные в структуру
    for (int i=0; i < N; i++) {
        cp[i].symbolCode = i;
        cp[i].symbolCounter = 0;
    }
    printf("Введите строку для обработки: \n");
//
    fgets(str, MAX_LENGTH, stdin);
//    и считаем частоту упоминаний
    for (int i = 0; i < strlen(str); i++)
    {
        cp[ str[i] ].symbolCounter++;
    }
//    сортируем в порядке убывания
    qsort((void *)(&cp), N, sizeof(struct counter_struct),compare);
//    и выводим в консоль
    for (int i = 0; i < N; i++) {
        if(cp[i].symbolCounter == 0 || cp[i].symbolCode == '\n' || cp[i].symbolCode == ' ') continue;
        printf("Символ %c -> %d упоминаний \n",cp[i].symbolCode, cp[i].symbolCounter);
    }
    
}
