/*
1;2802;0c** crypto.c for  in /home/baptiste/project/crypt_appearance
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Tue Jun  7 18:04:53 2016
** Last update Tue Jun  7 18:41:01 2016 
*/

#include "data.h"

int	resolv(t_data *data)
{
  char	*tmp;

  if ((tmp = my_strdup(data->str_ori)) == NULL)
    return (-1);
  printf("[diff] = %d\n", count_char_diff(tmp));
  return (1);
}

int	count_char_diff(char *str)
{
  int	i = -1;
  int	len_diff = 0;

  while (str[++i] != '\0')
    {

      printf("[chaine] = %s et [c] = %c\n", str, str[i]);
      len_diff += count_char_here(str, str[i]);
      if (end_check(str) == 1)
	return (len_diff);
    }
  return (len_diff);
}

int	count_char_here(char *str, char c)
{
  int	i = -1;
  int	here = 0;

  if (c != ' ')
    {
      while (str[++i] != '\0')
	{
	  if (str[i] != ' ')
	    {
	      if (str[i] == c)
		{
		  str[i] = ' ';
		  here = 1;
		}
	    }
	}
    }
  return (here);
}

int	end_check(char *str)
{
  int	i = -1;

  while (str[++i] != '\0')
    {
      if (str[i] != ' ')
	return (0);
    }
  return (1);
}
