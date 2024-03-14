#include<stdio.h>
char gender(char);
int armst(int);
int pallin(int);
int fact(int);
int cou(int);
int rev(int);
int fib(int);
int voter(int);
int mark_sh(int);
int swap_w(int, int);
int swap_o(int, int);
int week(int);
int month(int);
int table(int);
int sums(int);
int even(int);
int odd(int, int);
int table_in(int, int);
int elec(int);
int tick(int);
char game(char, char);

int main(){
    char ch;
    printf("choose one g,a,p,f,c,r,b,v,m,s,w,n,t,k,e,x,j,u,z: ");
    scanf("%c", &ch);
    if(ch=='g'){
        char k;
        printf("enter gender: ");
        scanf(" %c", &k);
        gender(k);
    }else if(ch=='a'){
        int k;
        printf("enter number: ");
        scanf("%d", &k);
        armst(k);
    }else if(ch=='p'){
        int k;
        printf("enter number: ");
        scanf("%d", &k);
        pallin(k);
    }else if(ch=='f'){
        int k;
        printf("enter number: ");
        scanf("%d", &k);
        fact(k);
    }else if(ch=='c'){
        int k;
        printf("enter number: ");
        scanf("%d", &k);
        cou(k);
    }else if(ch=='r'){
        int k;
        printf("enter number: ");
        scanf("%d", &k);
        rev(k);
    }else if(ch=='b'){
        int k;
        printf("enter number: ");
        scanf("%d", &k);
        fib(k);
    }else if(ch=='v'){
        int k;
        printf("enter age: ");
        scanf("%d", &k);
        voter(k);
    }else if(ch=='m'){
        int a;
        printf("enter grade of student: ");
        scanf("%d", &a);
        mark_sh(a);
    }else if(ch=='s'){
        char chs;
        printf("choose one w or o: ");
        scanf(" %c", &chs);
        if(chs == 'w'){
            int a,b;
            printf("enter two numbers: ");
            scanf("%d %d", &a, &b);
            swap_w(a,b);
        }else if(chs == 'o'){
            int a,b;
            printf("enter two numbers: ");
            scanf("%d %d", &a, &b);
            swap_o(a,b);
        }else{
            printf("input mismatch");
        }
    }else if(ch=='w'){
        int a;
        printf("Enter day number (1-7): ");
        scanf("%d", &a);
        week(a);
    }else if(ch=='n'){
        int a;
        printf("Enter day number (1-12): ");
        scanf("%d", &a);
        month(a);
    }else if(ch=='t'){
        int a;
        printf("Enter a number: ");
        scanf("%d", &a);
        table(a);
    }else if(ch=='k'){
        int a;
        printf("Enter a number: ");
        scanf("%d", &a);
        sums(a);
    }else if(ch=='e'){
        int a;
        printf("enter a number: ");
        scanf("%d", &a);
        even(a);
    }else if(ch=='x'){
        int a, b;
        printf("enter starting and ending number: ");
        scanf("%d %d", &a, &b);
        odd(a,b);
    }else if(ch=='j'){
        int a, b;
        printf("enter starting and ending number: ");
        scanf("%d %d", &a, &b);
        table_in(a, b);
    }else if(ch=='u'){
        int units;
        printf("Enter the number of units: ");
        scanf("%d", &units);
        elec(units);
    }else if(ch=='z'){
        int a;
        printf("enter age: ");
        scanf("%d", &a);
        tick(a);
    }else{
        printf("input mismatch");
    }
    return 0;
}

char gender(char k){
    if(k=='m'){
        printf("male");
    }else if(k=='f'){
        printf("female");
    }else{
        printf("input mismatch");
    }
    return k;
}
int armst(int k){
    
    int rem,result=0;
    int temp=k;
    while(k>0){
        rem=k% 10;
        result=result+(rem*rem*rem);
        k= k / 10;
    }
    printf("%d\n", result);
    if(temp == result){
        printf("this is an armstrong number \n");
    }else{
        printf("it's not an armstrong number \n");
    }
    return result;
}

int pallin(int k){
    
    int rem,result=0;
    int temp=k;
    while(k>0){
        rem=k% 10;
        result=result*10+rem;
        k= k / 10;
    }
    printf("%d\n", result);
    if(temp == result){
        printf("this is an pallindrome number \n");
    }else{
        printf("it's not an pallindrome number \n");
    }
    
    return result;

}
int fact(int k){
    
    int fact=1;
    for(int i=1;i<=k;i++){
        fact*=i;
    }
    printf("%d\n", fact);
    return fact;
    
}
int cou(int k){
    
    int count=0;
    while(k>0){
        count++;
        k= k / 10;
    }
    printf("%d", count);
    return count;
    
}
int rev(int k){
    
    int rem,result=0;
    int temp=k;
    while(k>0){
        rem=k% 10;
        result=result*10+rem;
        k= k / 10;
    }
    printf("%d\n", result);
    
    return k;
    
}
int fib(int k){
    
    int n1=0,n2=1,n3;
    printf("%d %d ",n1, n2);
    for(int i=1;i<=k;i++){
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
    
    return k;
    
}
int voter(int k){
    
    if(k>=18){
        printf("you are eligible:   \n");
    }else{
        printf("better luck next year:   \n");
    }
    
    return k;
}
int mark_sh(int a){
    
    if (a<25) {
        printf("F");
    }else if(25<=a<45){
        printf("E");
    }else if(45<=a<50){
        printf("D");
    }else if(50<=a<60){
        printf("c");
    }else if(60<=a<80){
        printf("B");
    }else if(80<=a){
        printf("A");
    }else{
        printf("input mismatch");
    }
    
    return a;
    
    
}
int swap_w(int a, int b){
    
    printf("before swap: %d %d",a,b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("after swap: %d %d\n", a,b);
    
    return a;

}
int swap_o(int a, int b){
    printf("before swap: %d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap: %d %d\n", a,b);
    
    return a;
    
}
int week(int a){
    
    if(a==1){
        printf("sunday ");
    }else if(a==2){
        printf("monday ");
    }else if(a==3){
        printf("tuesday ");
    }else if(a==4){
        printf("wednesday ");
    }else if(a==5){
        printf("thursday ");
    }else if(a==6){
        printf("friday ");
    }else if(a==7){
        printf("saturday ");
    }else{
        printf("invalid entry");
    }
    
    return a;
    
}
int month(int a){
    
    if(a==1){
        printf("january ");
    }else if(a==2){
        printf("february ");
    }else if(a==3){
        printf("march ");
    }else if(a==4){
        printf("april ");
    }else if(a==5){
        printf("may ");
    }else if(a==6){
        printf("june ");
    }else if(a==7){
        printf("july ");
    }else if(a==8){
        printf("agust ");
    }else if(a==9){
        printf("september ");
    }else if(a==10){
        printf("october ");
    }else if(a==11){
        printf("november ");
    }else if(a==12){
        printf("december ");
    }else{
        printf("invalid mismatch");
    }
    
    return a;
    
}
int table(int a){
    
    for(int i=1;i<=10;i++){
        printf("%d ", a*i);
    }
    
    return a;
}
int sums(int a){
    int sum=0;
    for(int i=1;i<=a;i++){
        sum+=i;
    }
    printf("%d ", sum);
    return a;
    
}
int even(int a){
    
    if(a%2==0){
        printf("its even ");
    }else{
        printf("its odd ");
    }
    return a;
    
    
}
int odd(int a, int b){
    
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            printf("%d ", i);
        }
    }
    
    return a;
    
    
}
int table_in(int a, int b){
    
    for(int i=a;i<=b;i++){
        for(int j=1;j<=10;j++){
            printf("%d ", i*j);
        }
        printf("\n");
    }
    return a;
    
    
}
int elec(int units){
    
    float unit_price = 10;
    float discount, total_bill;

    total_bill = units * unit_price;
    printf("your amount without discount: %.2f\n", total_bill);
    if (units >= 1 && units <= 10) {
        discount = total_bill * 0.10;
        printf("discount: 10\n");
    } else if (units <= 20) {
        discount = total_bill * 0.15;
        printf("discount: 15\n");
    } else if (units <= 40) {
        discount = total_bill * 0.30;
        printf("discount: 30\n");
    } else if (units >= 50) {
        discount = total_bill * 0.50;
        printf("discount: 50\n");
    } else {
        discount = 0;
    }

    total_bill -= discount;
    
    printf("Final bill after discount: %.2f\n", total_bill);
    
    return units;

}
int tick(int a){
    
    if(a<18){
        printf("there is 5 percent discount ");
    }else if(a>50){
        printf("there is 10 percent discount ");
    }else{
        printf("there is no discount ");
    }
    return a;
    
    
}
