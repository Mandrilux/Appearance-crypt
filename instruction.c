/*
** instruction.c for  in /home/baptiste/project/crypt_appearance
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Wed Jun  8 22:53:14 2016
** Last update Wed Jun  8 22:58:21 2016 
*/


#include "data.h"

void swap(t_list **liste)
{
  /* t_list *tmp; */
  t_list *tmp2;
  t_list *save;

  save = (*liste)->nxt->nxt;
  /* tmp = *liste; */
  tmp2 = *liste;
  *liste = (*liste)->nxt;
  (*liste)->nxt = tmp2;
  (*liste)->nxt->nxt = save;
}

void	rotate_left(t_list **liste)
{
  t_list	*tmp;

  tmp = *liste;
  while (tmp->nxt != NULL)
    tmp = tmp->nxt;
  tmp->nxt = *liste;
  *liste = (*liste)->nxt;
  tmp->nxt->nxt =NULL;
}

/* void    rotate_left_end(t_list **liste, int stop) */
/* { */
/*   t_list        *tmp; */

/*   tmp = *liste; */
/*   while (tmp->nxt != NULL) */
/*     tmp = tmp->nxt; */
/*   /\* if (stop == 1) *\/ */
/*   /\*   my_putstr("ra "); *\/ */
/*   /\* else *\/ */
/*   /\*   my_putstr("ra"); *\/ */
/*   tmp->nxt = *liste; */
/*   *liste = (*liste)->nxt; */
/*   tmp->nxt->nxt =NULL; */
/* } */

/* void show_list_c(t_list *liste) */
/* { */
/*   t_list *tmp; */

/*   tmp = liste; */
/*   while (tmp != NULL) */
/*     { */
/*       /\* my_put_nbr(tmp->val); *\/ */
/*       /\* my_putchar(' '); *\/ */
/*       tmp = tmp->nxt; */
/*     } */
/* } */

void free_list(t_list **liste)
{
  t_list *tmp;
  t_list *tampon;

  tmp = *liste;
  while (tmp->nxt != NULL)
    {
      tampon = tmp;
      tmp = tmp->nxt;
      free(tampon);
    }
  free(tmp);
}
