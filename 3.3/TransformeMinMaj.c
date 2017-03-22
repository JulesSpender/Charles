/*
** TransformeMinMaj.c for emacs in /home/jules/Charles/Charles/3.3
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Wed Mar 22 11:03:54 2017 Jules Spender
** Last update Wed Mar 22 11:08:09 2017 Jules Spender
*/

int	TransformeMinMaj(char c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
      if (c >= 'a' && c <= 'z')
	c = c - 32;
      return (1);
    }
  return (0);
}
