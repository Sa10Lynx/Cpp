#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int counter = 0; // Shared resource
pthread_mutex_t mutex; // Mutex for protecting the shared resource

void* evenCount(void* arg){
    while(counter<100){
        //if(counter%2==0){
            pthread_mutex_lock(&mutex);
            printf("even:%d\n",counter);
            
            counter++;
            pthread_mutex_unlock(&mutex);
        //}
    }

}

void* oddCount(void* arg){
    while(counter<100){
        //if(counter%2!=0){
            pthread_mutex_lock(&mutex);
            printf("odd: %d\n",counter);
            
            counter++;
            pthread_mutex_unlock(&mutex);
        //}
    }

}

int main() {
    pthread_t thread1, thread2;

    // Initialize the mutex
    if (pthread_mutex_init(&mutex, NULL) != 0) {
        fprintf(stderr, "Failed to initialize mutex\n");
        return 1;
    }

    // Create two threads
    pthread_create(&thread1, NULL, evenCount, NULL);
    pthread_create(&thread2, NULL, oddCount, NULL);
    
    
    //sleep(10);
    // // Wait for both threads to finish
     pthread_join(thread1, NULL);
     pthread_join(thread2, NULL);

    // Destroy the mutex
    pthread_mutex_destroy(&mutex);

    printf("Final Counter: %d\n", counter); 
    return 0;
}
