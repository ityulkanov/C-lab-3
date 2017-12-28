
#include <stdio.h>
#include "task3.h"
#define N 150
int main() {
    
    char word[N];
    char buf[N] = { 0 };
    printf("Please, enter your line\n" );
    fgets(buf, N, stdin);
    printf("The max length is %d and the word is %s\n", getMaxWord(buf, word) ,word);
    return 0;
}
