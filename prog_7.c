#include<stdio.h>
int add();
void sub();
int divi();
void mul(int, int);
int mod(int, int);


int main()
{
  printf ("%d\n", add ());


  sub ();

  printf ("%d\n", divi ());

  int a, b;
  printf ("enter two number: ");
  scanf ("%d %d", &a, &b);
  mul (a, b);



  int c, d;
  printf ("enter two number: ");
  scanf ("%d %d", &c, &d);
  printf ("%d\n", mod (c, d));


    return 0;
}

int add()
{
  int a, b;
  printf ("enter two number: ");
  scanf ("%d %d", &a, &b);


  return a + b;
}

void sub()
{
  int a, b;
  printf ("enter two number: ");
  scanf ("%d %d", &a, &b);
  printf ("%d\n", a-b);
}

int divi()
{
  int a, b;
  printf ("enter two number: ");
  scanf ("%d %d", &a, &b);

  return a/b;
}

void mul(int a, int b)
{
  printf ("%d\n", a * b);
}

int mod(int c, int d)
{
    
    return c % d;
}
