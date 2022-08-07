#include <unistd.h>
#include <stdio.h>

void ft_putchar (char c) {
  write(1, &c, 1);
}

void ft_putchars (char a, char b, char x, char z) {
  ft_putchar(a);
  ft_putchar(b);
  ft_putchar(' ');
  ft_putchar(x);
  ft_putchar(z);
}


int main (int argc, char *argv[]) {
  char a, b, x, z;
  a = b = x = z = '0';
  
  int count = 0;

  while (a <= '9') { 
    while (b <= '9') { 
      while (x <= '9') {
        while (z <= '9'){
          ft_putchars(a, b, x, z);
          ft_putchar(',');
          ft_putchar(' ');
          z++;
          count++;
        } z = '0'; ft_putchar('\n'); 
        x++;
      }  
      x = a; z = ++b + 1;
    }
    a++;
    b = '0';
    z = b + 1;
    x = a;
  }
  printf("%d\n", count);
  return 0;
}
