/*
** main.c for emacs in /home/jules/Charles/4
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Wed Feb 15 20:13:57 2017 Jules Spender
** Last update Wed Feb 15 20:30:20 2017 Jules Spender
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
  int	a;
  int	n;
  int	i;
  int	res;

  a = 0;
  n = 0;
  i = 1;
  res = 0;
  printf("Valeur du Nombre à monter à la puissance (a) :\n");
  scanf("%d", &a);
  printf("Valeur de la puissance à effectuer sur le nombre a:\n");
  scanf("%d", &n);
  res = a;
  if (n <= 0)
    {
      write(2, "Erreur dans la valeur de n, il ne peut etre negatif ou nul", 59);
      return (84);
    }
  while (i < n)
    {
      res = res * a;
      i = i + 1;
    }
  printf("Valeur de a à la puissance n : %d \n", res);
  return (0);
}
