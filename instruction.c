/*
** instruction.c for inscrut in /home/heraud_b/rendu/CPE_2015_pushswap
**
** Made by baptiste heraud
** Login   <heraud_b@epitech.net>
**
** Started on  Mon Nov  2 16:01:44 2015 baptiste heraud
** Last update Wed Jun  8 22:27:16 2016 
*/

#include "data.h"

void swap(int *array)
{
  swap_elem(array, 0, 1);
}

void rotate_left(int *array, int size)
{
  int i;

  i = 0;
  swap_elem(array, 0, size);
  while (i < size)
    {
      if (i + 1 == size)
	  swap_elem(array, i , i + 1);
      else
	swap_elem(array, i , i + 1);
      i++;
    }
  /* my_putstr("ra "); */
}

void rotate_right(int *array, int size)
{
  int i;

  i = size;
  while (i > 1)
    {
      if (i - 1 == 0)
        {
          swap_elem(array, i , size - 1);
          swap_elem(array, i , i - 1);
        }
      else
        swap_elem(array, i , i - 1);
      i--;
    }
}

/* void display_tab(int *array, int size) */
/* { */
/*   int i; */

/*   i = 0; */
/*   while (i < size) */
/*     { */
/*       /\* my_put_nbr(array[i]); *\/ */
/*       /\* my_putstr(" , "); *\/ */
/*       i++; */
/*     } */
/*   /\* my_putchar('\n'); *\/ */
/* } */
