
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

typedef struct		s_list
{
  int			val;
  char			letter;

  struct s_list	*nxt;
}			t_list;

char *strdup(const char *s);

		/* sort.c */

int		 check_order(t_list **l_a, int size);
int		 add_first(t_list **liste, int valeur, char c);
int		 sort(t_list **l_a, int size);

		/* instruction.c */

void             swap(t_list **liste);
void		 rotate_left(t_list **liste);
void		 free_list(t_list **liste);

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

void		show_list_c(t_list *liste);
int		display_error(char *str);

		/* get_line.c */

char		 *my_strdup(char *src);

		/* main.c */

int		 create_occ_nb(t_data *data);

		/* resolv.c */

int	 	 ceasar(t_list *liste, char *str);

		/* init.c */

t_data          *init_data();
#endif /* DATA_H_ */
