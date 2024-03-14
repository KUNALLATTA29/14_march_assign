#include<stdio.h>
int add();
int sub();
int divi();
int mul();
int mod();
int main(){
    printf("%d\n", add());
    printf("%d\n", sub());
    printf("%d\n", divi());
    printf("%d\n", mul());
    printf("%d\n", mod());
    return 0;
}
int add(){
    int a,b,c;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    c=a+b;
    return c;
}

int sub(){
    int a,b,c;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    c=a-b;
    return c;
}

int divi(){
    int a,b,c;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    c=a/b;
    return c;
}

int mul(){
    int a,b,c;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    c=a*b;
    return c;
}

int mod(){
    int a,b,c;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    c=a%b;
    return c;
}
