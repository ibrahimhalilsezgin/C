#include<stdio.h>

#define number_of_edge 4

int main(){
    
    int edge;
    int area;
    int env;

    printf("Karenin kenari :");
    scanf("%d", &edge);
    area = edge * edge;
    env = edge * number_of_edge;
    printf("Area: %d \nEnvironment: %d\n", area, env);
}
