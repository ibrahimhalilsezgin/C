#include<stdio.h>

int main(){
    int a;
    printf("Enter Number: ");
    scanf("%d", &a);
    if(a > 0){
        printf("Your Number Bigger than 0\n");
    } else if (a == 0){
        printf("Your Number Equal 0\n");
    } else {
        printf("Your Number less than 0\n");
    }
    return 0;
}
