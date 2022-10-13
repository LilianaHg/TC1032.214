#include <pthread.h>
#include <stdio.h>

typedef struct thread_data{
   // ThreadData *myData = (ThreadData *)arg;
    int threadId;
    char name[20];
} ThreadData;
typedef char caracter; //cada vez que escriba caracter va a ser char

void *holaMundo(void *arg){
    ThreadData *myData = (ThreadData *)arg;
    printf("Hola desde el hilo y mi id es %d\n",myData->threadId);
    pthread_exit(NULL);
}

int main(){
    for(int i = 0; i<100; i++){
        ThreadData myData;
        pthread_t threadId;
        myData.threadId = i;
        pthread_create(&threadId,NULL,holaMundo, (void *) &myData);
        
    }
     //donde guardas la info del hilo, 0, funcion, argumento de la funcion
    pthread_exit(NULL); //espera a que todos los hilos terminen y luego termina el principal
    printf("NUNCA LLEGA");


}