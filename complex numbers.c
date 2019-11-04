///Write a program to add, subtract and multiply two complex numbers using structures to function.
#include<stdio.h>
struct complex
{

  int real;
  int imag;
};

struct complex add(struct complex a, struct complex b)
{
  struct complex d;
  d.real = a.real+b.real;
  d.imag = a.imag+b.imag;
  return d;
}

struct complex sub(struct complex a, struct complex b)
{
  struct complex d;
  d.real = a.real-b.real;
  d.imag = a.imag-b.imag;
  return d;
}

struct complex multiply(struct complex a, struct complex b)
{
  struct complex d;
  d.real = (a.real*b.real)-(a.imag*b.imag);
  d.imag = (a.real*b.imag)+(a.imag*b.real);
  return d;
}

int main()
{

  struct complex d1 = {12,2};
  struct complex d2 = {14,11};

  struct complex d = add(d1,d2);
  struct complex e = sub(d1,d2);
  struct complex f = multiply(d1,d2);

  printf("ADD - %d+%di\n",d.real,d.imag);
  printf("SUB - %d+%di\n",e.real,e.imag);
  printf("MUL - %d+%di\n",f.real,f.imag);

  return 0;
}
