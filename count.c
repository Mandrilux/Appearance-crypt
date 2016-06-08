/*
** count.c for  in /home/baptiste/project/crypt_appearance
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Wed Jun  8 21:36:30 2016
** Last update Wed Jun  8 21:38:04 2016 
*/

#include "data.h"

int     count_char(char *str, char c)
{
  int   nb = 0, i = -1;

  while (str[++i] != '\0')
    {
      if (str[i] == c)
	nb++;
    }
  return (nb);
}
