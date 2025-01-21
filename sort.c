#include <stdio.h>

void sortAscending(int numList[], int size) {
    for (int i = 0; i < size - 1;i ++ ) {
        for (int j = size - 1; j > i; j --) {
            if (numList[j - 1] < numList[j]) {
                int swap = numList[j];
                numList[j] = numList[j - 1];
                numList[j - 1] = swap;
            }
        }
    }
    printf("result = ");
    for (int i = 0; i < size; i ++) {
        printf("%d", numList[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main(void){
    const int SIZE = 5; //定数として配列のサイズを宣言                          
    int scores[SIZE] = {0, 60, 70, 100, 90};
    sortAscending(scores, SIZE);
    return 0;
}
