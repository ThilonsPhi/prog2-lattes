    #include <stdio.h>
    #include <stdlib.h>
     
    #define LINESIZE 1024
     
    int main ()
    {
      FILE *arq ;
      char line[LINESIZE+1] ;
     
      arq = fopen ("curriculo.xml", "r") ;
      if ( ! arq )
      {
         perror ("Erro ao abrir arquivo") ;
         exit (1) ;
      }
     
      /*lê as 10 primeiras linhas do arquivo*/
      while (!feof(arq))
      {
        fgets (line, LINESIZE, arq) ;
        printf ("%s\n", line) ;
      }
     
      /*fecha o arquivo*/
      fclose (arq) ;
      
      return 0;

    }

