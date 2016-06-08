/*
** sort_number.c for sort_number in /home/heraud_b/rendu/CPE_2015_pushswap
**
** Made by baptiste heraud
** Login   <heraud_b@epitech.net>
**
** Started on  Mon Nov  2 14:55:55 2015 baptiste heraud
** Last update Wed Jun  8 22:32:21 2016 
*/

#include "data.h"

void	sort_numbers(int *array, int size)
{
  int swapped;
  int	i;

  i = 1;
  swapped = 1;
  while (swapped)
    {
      swapped = 0;
      while (i < size)
	{
	  if (array[i] > array[i + 1])
	    {
	      swap_elem(array, i, i + 1);
	      swapped = 1;
	    }
	  i++;
	}
      i = 0;
    }
}

int     sort_board(int *l_a, char *str, int size)
{
  int   i;
  int   z;
  int   stop;

  z = 0;
  i = 0;
  stop = 1;
  while (stop)
    {
      stop = 0;
      while (i < size - 1)
	{
	  if (l_a[0] > l_a[1])
	    {
	      swap(l_a);
	      stop = 1;
	    }
	  rotate_left(l_a, size);
	  i++;
	}
      rotate_left(l_a, size);
      z++;
      i = 0;
    }
  return (1);
}
