#include <stdio.h>

int main () {
    int addition = 0;

    for (int i = 0; addition < 100 ; ++i) {
        int a = addition;
        addition = addition + i;
        printf("%d + %d = %d  \n" , i , a , addition);
    }
}

