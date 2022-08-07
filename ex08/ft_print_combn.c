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
  sequence(digits, n); 
  
  char first = '0';
  char last = sequence[n - 1]; // last char of last digit before
                                 // incrementing digit before
  char top = '9'; // top of current index, last - 1
  char max = '9' - n - 1;

  i = n - 1;
  

  while (digits[0] <= max)
  { // start loop at last digit, iterate till hits 9
    // then increment digit before
    // then do the same but starting from 1 digit upper than before
    while (digits[i] <= top) { 
      digits[i]++;
      
      ft_putchar_array(digits, n);
      if (digits[i] == top)
      {
        digits[i - 1]++;
        last++;
        digits[i] = last
      }
    }
    first++;
    sequence(digits, n);
    digits[0] = first;
    top = '9';
    i = n - 1;
  }
}

int main(void)
{
  ft_print_combn(5);
  return 0;
}
