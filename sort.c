/*
** main.c for day in /media/heraud/2337a639-4d85-4f36-ade6-cdcedffd0cf2/heraud_b/Desktop/CPE_2015_pushswap
**
** Made by heraud_b
** Login   <heraud@epitech.net>
**
** Started on  Wed Nov 18 18:28:32 2015 heraud_b
** Last update Wed Jun  8 22:57:36 2016 
*/

#include "data.h"

int	check_order(t_list **l_a, int size)
{
  int tampon;
  t_list *tmp;

  if (size == 1)
    return (0);
  tmp = *l_a;
  while (tmp->nxt != NULL)
    {
      tampon = tmp->val;
      tmp = tmp->nxt;
      if (tampon > tmp->val)
	return (1);
    }
  return (0);
}

int	add_first(t_list **liste, int valeur)
{
  t_list *new_maillon;

  new_maillon = malloc(sizeof(*new_maillon));
  if (new_maillon == NULL)
    return (1);
  new_maillon->val = valeur;
  new_maillon->nxt = *liste;
  *liste = new_maillon;
  return (0);
}

int	sort(t_list **l_a, int size)
{
  int i;
  int stop;
  t_list *tmp;

  i = 0;
  stop = 1;
  while (stop)
    {
      stop = 0;
      while (i < size - 1)
	{
	  tmp = l_a[0]->nxt;
	  if (l_a[0]->val > tmp->val)
	    {
	      swap(l_a);
	      stop = 1;
	    }
	  rotate_left(l_a);
	  i++;
	}
      rotate_left(l_a);
      i = 0;
    }
  return (1);
}

/* int	main(int argc, char **argv) */
/* { */
/*   t_list *l_a; */
/*   int i; */

/*   if (argc < 2) */
/*     { */
/*       my_putchar('\n'); */
/*       return (0); */
/*     } */
/*   i = argc - 1; */
/*   l_a = NULL; */
/*   while (i > 0) */
/*     { */
/*       add_first(&l_a, my_getnbr(argv[i])); */
/*       i--; */
/*     } */
/*   if (check_order(&l_a, argc - 1) == 1) */
/*     sort(&l_a, argc -1); */
/*   /\* add_first(&l_a, my_getnbr(argv[i])); *\/  my_putchar('\n'); */
/*   show_list_c(l_a); */
/*   free_list(&l_a); */
/*   return (0); */
/* } */
