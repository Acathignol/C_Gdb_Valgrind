/*
 * Un programme avec un bug "évident".
 *
 * Compilez-le et trouvez le bug avec gdb.
 */

#include <stdio.h>
#include <malloc.h>

int main()
{
	int *age=(int *)malloc(sizeof(int)); //int *age

	printf("Bonjour,\n");
	printf("Entrez votre age\n");
	scanf("%d", age);
	printf("Vous avez %d ans\n", *age);
  free(age);
  
	return 0;
}
