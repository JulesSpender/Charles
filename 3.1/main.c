/*
** main.c for emacs in /home/jules/Charles/Charles/3.1
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Wed Mar 22 09:56:12 2017 Jules Spender
** Last update Wed Mar 22 10:13:02 2017 Jules Spender
*/

# include <stdio.h>

void    my_swap(char **str1, char **str2);

int	main(int argc, char **argv)
{
  my_swap(&argv[1], &argv[2]);
  printf("argv[1] modif = %s | argv[2] modif = %s\n", argv[1], argv[2]);
  return (0);
}

void	my_swap(char **str1, char **str2)
{
  char	*temp;

  temp = *str1;
  *str1 = *str2;
  *str2 = temp;
}
