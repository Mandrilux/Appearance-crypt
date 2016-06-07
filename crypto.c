/*
1;2802;0c** crypto.c for  in /home/baptiste/project/crypt_appearance
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Tue Jun  7 18:04:53 2016
** Last update Tue Jun  7 18:51:35 2016 
*/

#include "data.h"

int	resolv(t_data *data)
{
  if ((data->str_tmp = my_strdup(data->str_ori)) == NULL)
    return (-1);
  printf("[diff] = %d\n", count_char_diff(data));
  return (1);
}

int	count_char_diff(t_data *data)
{
  int	i = -1;
  int	len_diff = 0;

  while (data->str_tmp[++i] != '\0')
    {

      printf("[chaine] = %s et [c] = %c\n", data->str_tmp, data->str_tmp[i]);
      if (data->str_tmp[i] != ' ')
	len_diff += count_char_here(data, data->str_tmp[i]);
      if (end_check(data->str_tmp) == 1)
	return (len_diff);
    }
  return (len_diff);
}

int	count_char_here(t_data *data, char c)
{
  int	i = -1;
  int	count = 0;
  while (data->str_tmp[++i] != '\0')
    {
      if (data->str_tmp[i] != ' ')
	{
	  if (data->str_tmp[i] == c)
	    {
	      data->str_tmp[i] = ' ';
	      count = 1;
	    }
	}
    }
  return (count);
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
