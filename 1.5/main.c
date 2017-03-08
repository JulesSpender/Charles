/*
** main.c for emacs in /home/jules/Charles/Charles/1.5
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Wed Mar  8 11:36:22 2017 Jules Spender
** Last update Wed Mar  8 12:22:31 2017 Jules Spender
*/

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
  //      |||             MENU DU MCDONALD                |||     \\
  int	prix;
  int	menu;
  char	refus;

  menu = 0;
  printf("Bonjour, bienvenue au Mc Donald, puis-je prendre votre commande?\n\n\n\n\n___  ___      ______                  _     _ \n|  \\/  |      |  _  \\                | |   | |\n| .  . | ___  | | | |___  _ __   __ _| | __| |\n| |\\/| |/ __| | | | / _ \\| '_ \\ / _` | |/ _` |\n| |  | | (__  | |/ / (_) | | | | (_| | | (_| |\n\\_|  |_/\\___| |___/ \\___/|_| |_|\\__,_|_|\\__,_|\n\n\n\n\n\nJe ne parle pas très bien francais veuillez me répondre par 'O' pour Oui ou 'N'pour Non avec exactement cette syntaxe.\nDans le cas contraire je m'en irai et vous laisserai faire la queue jusqu'au comptoir.\nMerci\n\n\n\n\nVotre Réponse: ");
  scanf("%c", &refus);
  printf("\n\n\n\n");
  if (refus == 'O')
    {
      printf("Merci d'avoir accepté de faire votre commande avec moi!\n");
      printf("Je vous laisse m'indiquer en appuyant sur la touche associée au menu que vous souhaitez\n\n\nMenu Maxi Best Of\t|1|\n\nMenu Best of\t\t|2|\n\nMenu McFirst\t\t|3|\n\nMenu Salade\t\t|4|\n\n");
      printf("\t\t\t");
      scanf("%d", &menu);
      if (menu >= 1 && menu <= 4)
	printf("Merci d'avoir choisi le menu ");
      if (menu == 1)
	printf("Maxi Best Of\n");
      else if (menu == 2)
	printf("Best Of");
      else if (menu == 3)
	printf("Mc First");
      else if (menu == 4)
	printf("Salade");
      else
	printf("Oups je n'ai pas compris :/");
      if (menu >= 1 && menu <= 4)
	printf("\nMerci Beaucoup et Aurevoir, je vous laisse avancer en caisse avec ce numéro: J37\nDites le à la caissiere et elle s'occupera de vous apporter votre menu.\nAurevoir\n\n");
      else
	printf("\nVoyez avec ma collegue à la caisse, elle s'occupera de votre choix.\n");
      return (0);
    }
  else
    {
      printf("Dommage... Je vous laisse faire la queue, veuillez avancer, client suivant S'ilvouplait\n");
      return (84);
    }
  return (0);
}
