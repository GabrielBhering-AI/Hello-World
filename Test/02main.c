#include <stdio.h>

int main(){
    char name[20];
    int age;
    printf("Type your name:");
    scanf("%s", name);
    printf("Your name is %s\n", name);

    printf("Type your age:");
    scanf("%d", & age);
    printf("Your age is %d\n", age);

    return 0;

}