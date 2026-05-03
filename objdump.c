#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *paths="/usr/bin/objdump";

int main(int argc,char *argv[]){
     int i;
     char a[4096]="";
     strcpy(a,paths);
     strcat(a," ");
     if (argc>1){
         for(i=1;i<argc;i++){
              strcat(a,argv[i]);
              strcat(a," ");
         }
     }
     system(a);
     return 0;
}