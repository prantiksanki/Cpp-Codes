#include <stdio.h>
#include <pthread.h>

 void *printMessage(void *threadId) 
 
{
    long tid = (long)threadId;
    printf("Hello from Thread %ld!\n", tid);
    pthread_exit(NULL);
}

int main()
{
     const int numThreads = 2;

     pthread_t threads[numThreads];
    long i ;
     for ( i = 0; i < numThreads; i++) {
        int result = pthread_create(&threads[i], NULL, printMessage, (void *)i);

        if (result) {
            fprintf(stderr, "Error creating thread %ld: %d\n", i, result);
            return -1;
        }
    }

     for ( i = 0; i < numThreads; i++)  
	{
        pthread_join(threads[i], NULL);
    }

    printf("All threads have completed.\n");

    return 0;
}

