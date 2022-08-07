#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}


void zero_array(char *arr, int size)
{ 
  int i = 0;
  while (i < size)
  {
    arr[i] = '0';
    printf("%c | %d \n", arr[i], i);
    i++;
  }
}


int main(void)
{
  char arr[4];
  zero_array(arr, 4);
  int i = 0;
  while (i < 4)
  {
    printf("%c | %d \n", arr[i], i);
    i++;
  } 
  return 0;
}
