#include <stdio.h>

int main(){
  char x;
  char a;
  int b;
  double c;

  printf("sizeof(a)=%ld\n", sizeof(a));
  printf("sizeof(b)=%ld\n", sizeof(b));
  printf("sizeof(c)=%ld\n", sizeof(c));

  printf("x=%p\n", &x);
  printf("a=%p\n", &a);
  printf("b=%p\n", &b);
  printf("c=%p\n", &c);

  return 0;
}
