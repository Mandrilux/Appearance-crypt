/*
** swap_two_nb.c for swap in /home/heraud_b/rendu/CPE_2015_pushswap
**
** Made by baptiste heraud
** Login   <heraud_b@epitech.net>
**
** Started on  Mon Nov  2 14:25:34 2015 baptiste heraud
** Last update Tue Nov 17 13:31:07 2015 heraud_b
*/

void swap_elem(int *array, int index1, int index2)
{
  int tmp;

  tmp = array[index1];
  array[index1] = array[index2];
  array[index2] = tmp;
}
