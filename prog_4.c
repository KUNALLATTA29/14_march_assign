#include<stdio.h>
int add(int, int);
int sub(int, int);
int divi(int, int);
int mul(int, int);
int mod(int, int);
int main(){
    int a,b;
    printf("enter two number: ");
    scanf("%d %d", &a, &b);
    printf("%d\n", add(a,b));
    
    int c,d;
    printf("enter two number: ");
    scanf("%d %d", &c, &d);
    printf("%d\n", sub(c,d));
    
    int e,f;
    printf("enter two number: ");
    scanf("%d %d", &e, &f);
    printf("%d\n", divi(e,f));
    
    int g,h;
    printf("enter two number: ");
    scanf("%d %d", &g, &h);
    printf("%d\n", mul(g,h));
    
    int i,j;
    printf("enter two number: ");
    scanf("%d %d", &i, &j);
    printf("%d\n", mod(i,j));
    
    
    return 0;
}
int add(int a, int b){
    int c;
    c=a+b;
    
    
    return c;
}

int sub(int c, int d){
    int k;
    k=c-d;
    
    
    return k;
}

int divi(int e, int f){
    int c;
    c=e/f;
    
    
    return c;
}

int mul(int g, int h){
    int c;
    c=g*h;
    
    
    return c;
}

int mod(int i, int j){
    int c;
    c=i%j;
    

    return c; 
}