/*
 * Les fonctions de manipulation de chaines en C ont l air puissantes
 * quand on regarde un programme comme celui-là. Mais executez-le
 * avant de vous rejouir.
 *
 * Dans gdb, vous pouvez afficher le contenu de la memoire a l'aide
 * de la commande x. Par exemple:
 *   x /10c hello : affiche les 10 prochains caracteres a partir de l'adresse hello
 *   x /5s hello :  affiche les 5 prochaines chaines a partir de l'adresse hello
 *   ...
 */

#include <stdio.h>

int main()
{
	char *hello = "hello, world!" + 3;
	char *charstring = 'h' + "ello, world!";

	printf("hello=%s, charstring=%s.\n", hello, charstring);
	printf("Eh non, on n'est pas en Java !\n");
	return 0;
}
