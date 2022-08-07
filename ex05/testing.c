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
  
  char trios = (char*)malloc(3 * 120);
  char trio = (char)malloc(3);
  
  int counter = 0;

  
  while (f <= '7') {
    while (s <= '8') {
      while (t <= '9') { 
        ft_putchars(f, s, t);
        
        trio[0] = &f; trio[1] = &s; trio[2] = &t;
        trios++ = *(trio);
        counter++;
        t++;
      } 
      t = ++s + 1;
    } 
    s = ++f + 1;
    t = s + 1;
  }
  
  ft_putchar('\n');
  int rev_counter = 0;
  while (counter > 0) {
    rev_counter += counter % 10;
    counter /= 10; rev_counter *= 10;
  }
  while (rev_counter > 0) {
  
    ft_putchar((rev_counter % 10) + '0');
    rev_counter /= 10;
  }

  return 0;
}
