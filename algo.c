/*
** resolv.c for  in /home/baptiste/project/crypt_appearance
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Thu Jun  9 10:11:09 2016
** Last update Thu Jun  9 10:35:02 2016 
*/

#include "data.h"

int	ceasar(t_list *liste, char *str)
{
  char	letter = '\0';
  t_list *tmp;
  int	diff = 0;
  int	flag = 0;
  int	i = -1;

  tmp = liste;
  while (tmp != NULL)
    {
      if (tmp->nxt == NULL)
	letter = tmp->letter;
      tmp = tmp->nxt;
    }
  if (letter >= 'a' && letter <= 'z')
    {
      diff = letter - 'e';
      flag++;
    }
  else if (letter >= 'A' && letter <= 'Z')
    {
      flag++;
      diff = letter - 'E';
    }
  if (flag > 0)
    {
      while (str[++i] != '\0')
	{
	  if (str[i] != ' ' && str[i] != '\t')
	    printf("%c", str[i] -= diff);
	  else
	    printf("%c", str[i]);
	}
      printf("\n");
      return (1);
    }
  else
    return (-1);
}
