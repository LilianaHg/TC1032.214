#include <unistd.h>
#include <stdio.h>  
#include <sys/wait.h>

int main(){
    //Si la variable es dif de cero es el padre, sino, el hjo
    int pid = fork();

    if(pid==0){
        printf("Soy el proceso hijo\n");
        //El segundo argumento es el nombre del programa
        //Programa, nombre con el que el SO se va a referir a el, demás argumentos
        execl("/workspace/TC1032.214/hola.exe","hola.exe",NULL);
        sleep(5);
        printf("Esto nunca va a aparecer pq ya es otro programa");
    }
    else{
        
        printf("Soy el proceso padre\n");
        wait(NULL); //le puedes pasar una variable, con la que termina el hijo
    }
    return 0;
}

//Si el padre muere, muere el hijo, así que el padre no puede terminar hasta que los hijos terminen