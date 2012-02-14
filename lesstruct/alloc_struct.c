#include <stdio.h> /* printf */
#include <string.h> /* strcpy */
#include <stdlib.h> /* malloc, free */

struct test{
    int a;
    char s[10];
};

int main(void)
  {
    char *chaine = "simple";
    struct test *t; /* t est un pointeur du type de la structure test */
    t=malloc(sizeof(struct test)); /* allocation de la m�moire � la
                                      taille de la structure, malloc
                                      retourne alors la nouvelle adresse
                                      et la met dans t */
    if(t!=NULL) /* si malloc ne peut allouer la m�moire il retourne
                   une adresse NULL, dans ce cas il y a un probl�me */
      {
        t->a=2; /* on acc�de aux membres de la structure � l'aide de
                   -> lorsqu'on utilise un pointeur */
        strcpy(t->s,chaine);
        printf("a : %d\ns : %s\n",t->a,t->s);
        free(t); /* on lib�re la m�moire qui se trouve � l'adresse point�e
                    par t */
      } else {
          fprintf(stderr,"erreur malloc\n");
      }
    return 0;
  }
