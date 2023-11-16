#include<stdio.h>
int main(){
    int a=513;
    char* c;
    c=&a;
    printf("%d",*c);
}