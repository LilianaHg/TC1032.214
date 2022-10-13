#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

char c;
char may;

int n;

int main(){
    

    do{
        char vocal = '1';
       //n = read(STDIN_FILENO,&c,1); //leer la entrada estándar, guardar en c y leer uno por una
       //may = toupper(c); //Convertir a mayúsculas
       //write(STDOUT_FILENO,&may,1);

        n = read(STDIN_FILENO,&c,1);
        may = toupper(c); //Convertir a mayúsculas
        if (may == 'A' || may =='E' || may=='I' || may=='O' || may=='U' ){
        write(STDOUT_FILENO,&vocal,1);
    }
    }
    while(n!=0);
    return 0;
        

}
   
