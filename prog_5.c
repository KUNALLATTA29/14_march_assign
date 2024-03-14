#include<stdio.h>
int swap(int, int);
int voter(int);
int two_num(int, int);
int three_num(int, int, int);
int value(int);
int armst(int);
int main(){
    int a,b;
    printf("enter two number: ");
    scanf("%d %d", &a, &b);
    swap(a,b);
    
    int c;
    printf("enter a number: ");
    scanf("%d", &c);
    voter(c);
    
    int d,e;
    printf("enter two number: ");
    scanf("%d %d", &d, &e);
    two_num(d, e);
    
    int f,g,h;
    printf("enter three number: ");
    scanf("%d %d %d", &f, &g, &h);
    three_num(f, g, h);
    
    int i;
    printf("enter a number: ");
    scanf("%d", &i);
    value(i);
    
    int j;
    printf("enter a number: ");
    scanf("%d", &j);
    armst(j);
    
    
    return 0;
}
int swap(int a, int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("after swap: %d %d\n", a,b);
    
    return c;
}

int voter(int a){
    
    if(a>=18){
        printf("you are eligible:   \n");
    }else{
        printf("better luck next year:   \n");
    }
    
    return a;
}

int two_num(int a, int b){
    
    if(a>b){
        printf("%d is greater:   \n", a);
    }else{
        printf("%d is greater:   \n", b);
    }
    
    return a;
    
}

int three_num(int f, int g, int h){
    int max = f;
    
    if (g> max) {
        max = g;
    }else if (h > max) {
        max = h;
    }
    printf("%d is maximum   \n",max);
    
    return max;
}

int value(int o){
    for(int i=o; i>=1;i--){
        if(i%2==0){
            printf("%d is even:  \n", i);
        }
    }
    
    return o;
}

int armst(int k){
    int rem,result=0;
    int temp=k;
    while(k>0){
        rem=k% 10;
        result=result+(rem*rem*rem);
        k= k / 10;
    }
    printf("%d \n", result);
    if(temp == result){
        printf("this is an armstrong number \n");
    }else{
        printf("it's not an armstrong number \n");
    }
    
    return k;
    
}