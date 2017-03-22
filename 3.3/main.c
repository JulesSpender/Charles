/*
** main.c for emacs in /home/jules/Charles/Charles/3.3
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Wed Mar 22 11:08:43 2017 Jules Spender
** Last update Wed Mar 22 11:15:13 2017 Jules Spender
*/

#include <stdio.h>

int	main(int argc, char **argv)
{
  int	i;

  i = 0;
  if (argc != 2)
    {
      printf("Usage : ./a.out [Strign to parse]\n");
      return (0);
    }
  while (argv[1][i] != '\0')
    {
      if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
	printf("%c", argv[1][i] - 32);
      if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
	printf("%c", argv[1][i]);
      i = i + 1;
    }
  return (0);
}
	  
