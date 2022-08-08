/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-rod <joao-rod@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 09:20:33 by joao-rod          #+#    #+#             */
/*   Updated: 2022/08/08 11:02:13 by joao-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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


void gen_sequence(char *arr, int index,	int size)
{// gen sequence starting by incrementing arr[index]
	int start = arr[index];
	start++;
	while (index < size)
	{
		arr[index++] = start;
		start++;
	}
}


void initial_sequence(char *arr, int size)
{ 
  int i = 0;
  while (i < size)
  {
    arr[i] = '0' + i;
    i++;
  }
}


void combn(char *arr, int index, int size)
{// increment at index
	ft_putchar_array(arr, size);

	if (arr[size - 1] < '9')
	{
		arr[size - 1]++;
		combn(arr, index, size);
	}
	else
	{
		if(arr[0] == '9' - size + 1)
	   	{
			return;
		}
		index = size - 2 ;
		while (arr[index] == arr[index + 1] - 1)
		{
			--index;
		}
		gen_sequence(arr, index, size);
		combn(arr, index, size);
	}
	

}


void ft_print_combn(int n) {
	int i;
	char digits[n]; 
	initial_sequence(digits, n); 
	combn(digits, n - 2, n);
}
	

   

  
int main(void)
{
  ft_print_combn(1);

  ft_putchar('\n');
  ft_print_combn(3);
  ft_putchar('\n');

  ft_print_combn(7);
  
  ft_putchar('\n');
  ft_print_combn(9);
  return 0;
}
