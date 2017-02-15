/*
** main.c for emacs in /home/jules/Charles/2
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Wed Feb 15 20:32:33 2017 Jules Spender
** Last update Wed Feb 15 20:57:53 2017 Jules Spender
*/

#include <stdio.h>

int	main()
{
  int	i;
  int	a;
  
  i = 11;
  a = 0;
  while (i <= 119)
    {
      if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i != 7 % 0)
	{
	  a = a + 1;
	  printf("%d\n", i);
	}
      i = i + 1;
    }
  printf("Nombre d'entiers affichés: %d \n", a);
  return (0);
}
