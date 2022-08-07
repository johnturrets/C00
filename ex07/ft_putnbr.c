#include <unistd.h>
#include <stdio.h>


void ft_putchar(char c){
  write(1, &c, 1);
}


void ft_putnbr(int nb)
{  
  char digits[10] = {0};
  int i = 0;
  int multiplier = 1;
  int digit = 0;

  if (nb < 0)
  {
    multiplier = -1;
    ft_putchar('-');
  }

  while (nb)
  {
    digits[i] = '0';
    digit = (nb % 10) * multiplier;
    digits[i] += digit;
    nb /= 10;
    i++;
  } // i = num of digits when exit loop, thats why --i below
 
  while(--i >= 0)
  {
    ft_putchar(digits[i]);
  }
}


int main(void)
{
  ft_putnbr(2147483647);
  ft_putchar('\n');
  ft_putnbr(-2147483648);
  return 0;
}
