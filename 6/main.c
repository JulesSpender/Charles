/*
** main.c for emacs in /home/jules/Charles/6
** 
** Made by Jules Spender
** Login   <jules.spender@epitech.eu@epitech.net>
** 
** Started on  Wed Feb 15 13:18:06 2017 Jules Spender
** Last update Wed Feb 15 20:07:05 2017 Jules Spender
*/

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
  int	i;
  int	x;
  int	a;
  int	b;
  int	z;

  i = 0;
  x = 0;
  a = 0;
  b = 0;
  z = 0;
  if (argc == 1)
    {
      printf("Quel format voulez vous? 1: Plein 2: Vide 3: Les Deux 4: J'annule\n");
      scanf("%d", &z);
      if (z == 4)
	return (0);
      printf("Largueur du rectangle:\n");
      scanf("%d", &i);
      printf("Longueur du rectangle:\n");
      scanf("%d", &x);
      write(1, "\n", 1);
      if (z == 1 || z == 3)
	{
	  if (i < 0 || x < 0)
	    {
	      printf("I et X doivent être des > à 0");
	      return (-1);
	    }
	  while (b < i)
	    {
	      while (a < x)
		{
		  write(1, "*", 1);
		  a = a + 1;
		}
	      b = b + 1;
	      a = 0;
	      write(1, "\n", 1);
	    }
	}
      if (z == 3)
	write(1, "\n", 1);
      if (z == 2 || z == 3)
	{
	  b = 0;
	  a = 0;
	  if (i < 0 || x < 0)
	    {
	      printf("I et X doivent être des > à 0");
	      return (-1);
	    }
	  while (b < i)
	    {
	      if (b == 0 || b == i - 1)
		{
		  while (a < x)
		    {
		      if (a == 0 || b == 0 || b == i - 1)
			{
			  write(1, "*", 1);
			  a = a + 1;
			}
		      else
			{
			  write(1, " ", 1);
			  a = a + 1;
			}
		    }
		}
	      else
		{
		  while (a < x)
		    {
		      if (a == 0 || a == x - 1)
			{
			  write(1, "*", 1);
			  a = a + 1;
			}
		      else
			{
			  write(1, " ", 1);
			  a = a + 1;
			}
		    }
		}
	      b = b + 1;
	      a = 0;
	      write(1, "\n", 1);
	    }
	}
    }
  else
    printf("NONNONONONON");
  return (0);
}
