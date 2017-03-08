/*
** main.c for emacs in /home/jules/Charles/Charles/1.4
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Wed Mar  8 08:36:24 2017 Jules Spender
** Last update Wed Mar  8 08:47:05 2017 Jules Spender
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
  int	hidden_number;
  int	result;
  int	number_turn;
  int	error;

  error = 0;
  number_turn = 1;
  hidden_number = 974;
  result = 0;
  while (result != hidden_number && number_turn <= 10)
    {
      printf("Quel valeur voulez vous essayer? Vous etes au tour %d.\n", number_turn);
      scanf("%d", &result);
      if (result > 1000)
	{
	  printf("Savez vous lire les règles?\n");
	  error = 1;
	}
      if (result < hidden_number)
	printf("AhAh votre nombre est en dessous\n");
      else if (result > hidden_number)
	printf("AhAh votre nombre est au dessus\n");
      else if (result = hidden_number)
	{
	  printf("Bravo tu as gagné\n");
	  return (0);
	}
      if (error == 0)
	number_turn = number_turn + 1;
      else
	error = 0;
    }
  printf("Reesaye, la prochaine fois je serai plus clémente\n");
  return (0);
}
