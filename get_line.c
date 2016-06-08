/*
** get_line.c for  in /home/baptiste/project/generator_h
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Mon May 16 11:29:12 2016
** Last update Wed Jun  8 10:31:10 2016 
*/

#include "data.h"

char    *my_strdup(char *src)
{
  char  *str;
  int   lenght;

  if (src == NULL)
    return (NULL);
  lenght = strlen(src) + 1;
  if ((str = malloc(sizeof(char) * lenght)) == NULL)
    return (NULL);
  strcpy(str, src);
  return (str);
}

char		*m_realoc(char *s, int fillback, char *buff, int *start)
{
  char		*line;
  int		old_len;

  old_len = 0;
  s != 0 ? (old_len = strlen(s)) : (old_len = 0);
  if ((line = malloc((old_len + fillback + 1) * sizeof(char))) == NULL)
    return (NULL);
  memset(line, '\0', old_len + fillback + 1);
  s != 0 ? strncpy(line, s, old_len) : strncpy(line, "", old_len);
  line[old_len + fillback] = '\0';
  strncpy(line + old_len, buff + start[0], fillback);
  start[0] = start[0] + fillback + 1;
   return (line);
}

char		*get_next_line(const int fd)
{
  static char   buff[READ_SIZE];
  static int    n = 0;
  static int    start;
  int           back;
  char          *s;

  s = NULL;
  if (fd == -1)
    return (NULL);
  back = 0;
  while (1)
    {
      if (n <= start)
	{
	  start = 0;
	  back = 0;
	  if (!(n = read(fd, buff, READ_SIZE)))
	    return (s);
       	  if (n == -1)
	    return (NULL);
	}
      if (buff[start + back] == '\n')
      	return (s = m_realoc(s, back, buff, &start));
      start + back == n - 1 ? s = m_realoc(s, back + 1, buff, &start) : NULL;
      back++;
    }
}
