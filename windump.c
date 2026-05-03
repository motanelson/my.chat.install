#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
char *paths="c:\\mingw\\bin";
char *files="objdump.exe";
int main(int argc,char *argv[]){
     int i;
     char a[4096]="";
     SetEnvironmentVariable("PATH", paths);
     strcpy(a,"echo %path%");
    
     system(a);

     strcpy(a,files);
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