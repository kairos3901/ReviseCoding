// #include <stdio.h>

// int main(){
//     int N = 28;
//     long long M = 10000012828;
//     printf("Dia chi cua N trong bo nho : %d\n", &N);
//     printf("Dia chi cua M trong bo nho : %d\n", &M);
//     return 0;
// }
#include <stdio.h>

int main() {
    int N;
    long long int M;

    printf("Dia chi cua N trong bo nho : %p\n", (void*)&N);
    printf("Dia chi cua M trong bo nho : %p\n", (void*)&M);

    return 0;
}