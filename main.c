#include <stdio.h>
#include <stdlib.h>

#include "definizioni.h"


int main ()
{
int i, j;
int somma;

printf ("Hello world....\n");
printf ("Digita il primo numero:");
scanf ("%d", &i);

printf ("Digita il seondo numero:");
scanf ("%d", &j);

somma = operazione_somma (i,j);

printf ("la somma è:  %d\n", somma);

return 0;

}
