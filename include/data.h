
#ifndef DATA_H_
#define DATA_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "get_next_line.h"

typedef struct          s_data
{
  char			*str_ori;
  char			*str_tmp;
  char			*occ_str;
  int			*occ_num;
}                       t_data;



char		 *my_strdup(char *src);




char		 *my_strdup(char *src);

		/* crypto.c */

int		 resolv(t_data *data);
int		 count_char_diff(char *str);
int		 count_char_here(char *str, char c);
int		 end_check(char *str);

		/* get_line.c */

char		 *my_strdup(char *src);

		/* main.c */

int		 main(void);

#endif /* DATA_H_ */
