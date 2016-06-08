/*
** display.c for  in /home/baptiste/project/crypt_appearance
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Wed Jun  8 21:51:54 2016
** Last update Wed Jun  8 21:52:09 2016 
*/

#include "data.h"

int     display(t_data *data)
{
  int   i = -1;

  while (data->occ_str[++i] != '\0')
    printf("char = [%c] et nb = %d\n", data->occ_str[i], data->occ_num[i]);
  return (1);
}
