
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




char		 *my_strdup(char *src);




char		 *my_strdup(char *src);




char		 *my_strdup(char *src);






char		 *my_strdup(char *src);






char		 *my_strdup(char *src);








char		 *my_strdup(char *src);








char		 *my_strdup(char *src);








char		 *my_strdup(char *src);










char		 *my_strdup(char *src);

		/* count.c */

int		 count_char(char *str, char c);

		/* strmcat.c */

char		 *my_strmcat(char *str_1, char *str_2);

		/* crypto.c */

int		 resolv(t_data *data);
int		 count_char_diff(t_data *data);
int		 count_char_here(t_data *data, char c);
int		 end_check(char *str);

		/* display.c */

int		 display(t_data *data);

		/* get_line.c */

char		 *my_strdup(char *src);

		/* main.c */

int		 main(void);
int		 create_occ_nb(t_data *data);

#endif /* DATA_H_ */
