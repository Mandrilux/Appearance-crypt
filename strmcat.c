/*
** my_strmcat.c for my_strmcat.c in /media/picot/2337a639-4d85-4f36-ade6-cdcedffd0cf2/picot_a/rendu/project/myls/lib/my
**
** Made by picot_a
** Login   <picot@epitech.net>
**
** Started on  Sun Nov 29 16:35:49 2015 picot_a
** Last update Tue Jun  7 19:05:31 2016 
*/

#include "data.h"

char	*my_strmcat(char *str_1, char *str_2)
{
  char	*dest;
  int	i;
  int	j;

  dest = malloc(sizeof(char) * (strlen(str_1) + strlen(str_2) + 1));
  if (dest == NULL)
    return (NULL);
  memset(dest, 0, (int)strlen(str_1) + (int)strlen(str_2) + 1);
  i = 0;
  while (str_1 != NULL && i < (int)strlen(str_1))
    {
      dest[i] = str_1[i];
      i++;
    }
  j = 0;
  while (str_2 != NULL && j < (int)strlen(str_2))
    {
      dest[i] = str_2[j];
      i++;
      j++;
    }
  return (dest);
}
