#include <stdio.h>

int main(){
    FILE *lsOutput;
    FILE *tomayInput;
    char readBuffer[80];
    lsOutput = popen("ls *.c","r"); //en lugar de ls puede ser cualquier otro ejecutable
    tomayInput = popen("wc -l","w");
    while(fgets( readBuffer,80 ,lsOutput )){ //variable donde voy a leer, tamaño máximo, de donde
       fputs(readBuffer, tomayInput); //cadena que quieres leer y el archivo donde lo vas a poner
}

    pclose(lsOutput);
    pclose(tomayInput);

}


        