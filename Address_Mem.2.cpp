// #include <stdio.h>

// int main (){
//     int N = 1000;
//     printf("Dia chi cua N: %p \n", &N);
//     int *ptr;
//     ptr = &N;
//     printf ("Gia tri cua ptr: %d\n", ptr);
//     return 0;
// }
#include <stdio.h>

int main (){
    int N = 1000;
    printf("Dia chi cua N: %p \n", (void*)&N);
    int *ptr;
    ptr = &N;
    printf("Gia tri cua ptr: %p\n", (void*)ptr);
    return 0;
}