// sample 1‐2‐3
#include <stdio.h>
int main(){
    int i = 10;
    float j = 10.5;
    char k = 'a';
    i = i / 3; // i の中身を「i を 100 倍したもの」で上書き
    j = j / 5;
    k = k + 2;
    printf("i = %d \n", i);
    printf("j = %f \n", j);
    printf("k = %c \n", k);
}