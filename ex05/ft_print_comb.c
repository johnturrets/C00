#include <unistd.h>
#include <stdio.h>

void ft_putchar (char c) {
  write(1, &c, 1);
}

void ft_putchars (char f, char s, char t) {
  ft_putchar(f);
  ft_putchar(s);
  ft_putchar(t);
  ft_putchar(',');
  ft_putchar(' ');
}


int main (int argc, char *argv[]) {
  int f, s, t;
  f = '0';
  s = '1';
  t = '2';
  
  while (f <= '7') {
    while (s <= '8') {
      while (t <= '9') { 
        ft_putchars(f, s, t);
        t++;
      } 
      t = ++s + 1;
    } 
    s = ++f + 1;
    t = s + 1;
  }

  return 0;
}
