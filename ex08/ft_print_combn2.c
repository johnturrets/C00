#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}


void ft_putchar_array(char arr[], int size)
{
  int i = 0;
  while (i < size)
  {
    ft_putchar(arr[i]);
    i++;
  }
  ft_putchar('\n');
}


void sequence(char *arr, int size)
{ 
  int i = 0;
  while (i < size)
  {
    arr[i] = '0' + i;
    i++;
  }
}


void ft_print_combn(int n) {
  int i;
  char digits[n]; 
   
  char first = '0';
  char last = '9';
  
  i = n - 1;
  
  sequence(digits, n);
  
   
  ft_putchar_array(digits, n);
  while (digits[0] <= '9' - (n - 1))
  {
    while (digits[i] <= last && i > 0) {
      digits[i]++;
      
      ft_putchar_array(digits, n);
      if (digits[i] == last)
      {
        i--i;
        last--;
      }
    }
    first++;
    sequence(digits, n);
    digits[0] = first;
    last = '9';
    i = n - 1;
  }
}

int main(void)
{
  ft_print_combn(5);
  return 0;
}
