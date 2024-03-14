#include<stdio.h>
int swap();
int voter();
int two_num();
int three_num();
int value();
int armst();
int main(){
    swap();
    voter();
    two_num();
    three_num();
    value();
    armst();
    return 0;
}
int swap(){
    int a,b,c;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    c=a;
    a=b;
    b=c;
    printf("after swap: %d %d\n", a,b);
    return c;
}

int voter(){
    int a;
    printf("enter your age: ");
    scanf("%d", &a);
    if(a>=18){
        printf("you are eligible:   \n");
    }else{
        printf("better luck next year:   \n");
    }
    
    return a;
}

int two_num(){
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a>b){
        printf("%d is greater:   \n", a);
    }else{
        printf("%d is greater:   \n", b);
    }
    
    return a;
    
}

int three_num(){
    int a,b,c, max;
    printf("enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max=a;
    if (b> max) {
        max = b;
    }else if (c > max) {
        max = c;
    }
    printf("%d is maximum   \n",max);
    
    return max;
}

int value(){
    int a;
    printf("enter one numbers: ");
    scanf("%d", &a);
    for(int i=a; i>=1;i--){
        if(i%2==0){
            printf("%d is even:  \n", i);
        }
    }
    
    return a;
}

int armst(){
    int a;
    printf("enter a numbers: ");
    scanf("%d", &a);
    int rem,result=0;
    int temp=a;
    while(a>0){
        rem=a% 10;
        result=result+(rem*rem*rem);
        a= a / 10;
    }
    printf("%d \n", result);
    if(temp == result){
        printf("this is an armstrong number \n");
    }else{
        printf("it's not an armstrong number \n");
    }
    
    return result;
    
}

