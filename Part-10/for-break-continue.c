#include <stdio.h>

int main() {

    int i;
    for(i =0; i < 10; i++){
        if(i == 6){
            printf("Ozel Durum 6 Simdi For Devam Ediyor\n");
            continue;
        } else if(i == 9){
            printf("Ozel Durum 9 Donguden Cikiyor\n");
            break;
        }
        printf("%d\n", i);
    }
    return 0; 
}