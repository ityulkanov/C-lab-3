#include "task3.h"
#include <string.h>

#define N 150

int getMaxWord(char buf[], char word[]) {
    int i = 0;
    int flag = 0;
//    int counter = 0;
    int countSymbolsCurrentWord = 1;
    int maxSymbolsWord = 0;
    
    while (buf[i])
    {
        
        if (buf[i] != ' ' && flag == 0)
        {
            flag = 1;
//            word[i] = buf[i];
//            counter++;
        }
        else if (buf[i] != ' '&& flag == 1)
        {
            countSymbolsCurrentWord++;
//            word[countSymbolsCurrentWord] = buf[i];
        }
        else if (buf[i] == ' '&& flag == 1)
        {
            if (maxSymbolsWord < countSymbolsCurrentWord) {
                maxSymbolsWord = countSymbolsCurrentWord;
                for (int j = 0; j <= maxSymbolsWord; j++) {
                    word[j] = buf[i - (maxSymbolsWord-j)];
                }
            }
            countSymbolsCurrentWord = 1;
            flag = 0;
        }
        
        
        i++;
        
    }
    
    return maxSymbolsWord;
}
