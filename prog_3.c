#include<stdio.h>
char gender();
int armst();
int pallin();
int fact();
int cou();
int rev();
int fib();
int voter();
char mark_sh();
int swap_w();
int swap_o();
int week();
int month();
int table();
int sums();
int even();
int odd();
int table_in();
int elec();
int tick();

int main(){
    char ch;
    printf("choose one g,a,p,f,c,r,b,v,m,s,w,n,t,k,e,x,j,u,z: ");
    scanf("%c", &ch);
    if(ch=='g'){
        gender();
    }else if(ch=='a'){
        armst();
    }else if(ch=='p'){
        pallin();
    }else if(ch=='f'){
        fact();
    }else if(ch=='c'){
        cou();
    }else if(ch=='r'){
        rev();
    }else if(ch=='b'){
        fib();
    }else if(ch=='v'){
        voter();
    }else if(ch=='m'){
        mark_sh();
    }else if(ch=='s'){
        char chs;
        printf("choose one w or o: ");
        scanf(" %c", &chs);
        if(chs == 'w'){
            swap_w();
        }else if(chs == 'o'){
            swap_o();
        }else{
            printf("input mismatch");
        }
    }else if(ch=='w'){
        week();
    }else if(ch=='n'){
        month();
    }else if(ch=='t'){
        table();
    }else if(ch=='k'){
        sums();
    }else if(ch=='e'){
        even();
    }else if(ch=='x'){
        odd();
    }else if(ch=='j'){
        table_in();
    }else if(ch=='u'){
        elec();
    }else if(ch=='z'){
        tick();
    }else{
        printf("input mismatch");
    }
    return 0;
}

char gender(){
    char k;
    printf("enter gender: ");
    scanf(" %c", &k);
    if(k=='m'){
        printf("male");
    }else if(k=='f'){
        printf("female");
    }else{
        printf("input mismatch");
    }
    return k;
}
int armst(){
    int k;
    printf("enter number: ");
    scanf("%d", &k);
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
    
    return k;

}

int pallin(){
    int k;
    printf("enter number: ");
    scanf("%d", &k);
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
    return k;

}
int fact(){
    int k;
    printf("enter number: ");
    scanf("%d", &k);
    int fact=1;
    for(int i=1;i<=k;i++){
        fact*=i;
    }
    printf("%d\n", fact);
    
    return k;
}
int cou(){
    int k;
    printf("enter number: ");
    scanf("%d", &k);
    int count=0;
    while(k>0){
        count++;
        k= k / 10;
    }
    printf("%d", count);
    
    return k;
}
int rev(){
    int k;
    printf("enter number: ");
    scanf("%d", &k);
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
int fib(){
    int k;
    printf("enter number: ");
    scanf("%d", &k);
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
int voter(){
    int k;
    printf("enter number: ");
    scanf("%d", &k);
    if(k>=18){
        printf("you are eligible:   \n");
    }else{
        printf("better luck next year:   \n");
    }
    
    return k;
}
char mark_sh(){
    int a;
    char k='k';
    printf("enter grade of student: ");
    scanf("%d", &a);
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
    
    return k;
}
int swap_w(){
    int a,b,c;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("before swap: %d %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("after swap: %d %d\n", a,b);
    
    return a;

}
int swap_o(){
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("before swap: %d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap: %d %d\n", a,b);
    
    return a;
}
int week(){
    int a;
    printf("Enter day number (1-7): ");
    scanf("%d", &a);
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
int month(){
    int a;
    printf("Enter day number (1-12): ");
    scanf("%d", &a);
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
int table(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    for(int i=1;i<=10;i++){
        printf("%d ", a*i);
    }
    
    return a;
}
int sums(){
    int sum=0;
    for(int i=1;i<=10;i++){
        sum+=i;
    }
    printf("%d ", sum);
    
    return sum;
}
int even(){
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    if(a%2==0){
        printf("its even ");
    }else{
        printf("its odd ");
    }
    
    return a;
}
int odd(){
    int a, b;
    printf("enter starting and ending number: ");
    scanf("%d %d", &a, &b);
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            printf("%d ", i);
        }
    }
    
    return a;
}
int table_in(){
    int a, b;
    printf("enter starting and ending number: ");
    scanf("%d %d", &a, &b);
    for(int i=a;i<=b;i++){
        for(int j=1;j<=10;j++){
            printf("%d ", i*j);
        }
        printf("\n");
    }
    
    return a;
}
int elec(){
    int units;
    float unit_price = 10;
    float discount, total_bill;

    printf("Enter the number of units: ");
    scanf("%d", &units);

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
int tick(){
    int a;
    printf("enter age: ");
    scanf("%d", &a);
    if(a<18){
        printf("there is 5 percent discount ");
    }else if(a>50){
        printf("there is 10 percent discount ");
    }else{
        printf("there is no discount ");
    }
    
    return a;
}
