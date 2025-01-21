#include <stdio.h>

void sortAscending(int numList[], int size) {
    for (int i = 0; i < size;i ++ ) {
        for (int j = i + 1; j < size; j ++) {
            if (numList[j] < numList[i]) {
                int temp = numList[i];
                numList[i] = numList[j];
                numList[j] = temp;
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
    // const int SIZE = 6; //定数として配列のサイズを宣言
    // int scores[SIZE] = {100, 60, 70, 100, 90, 80};
    sortAscending(scores, SIZE);
    return 0;
}
