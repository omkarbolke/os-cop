#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *print_message_function( void *ptr );

main()
{
     pthread_t thread1, thread2;
     char *message1 = "Thread 1";
     char *message2 = "Thread 2";
     char *message3 = "Thread 3";
     int  iret1, iret2;


     iret1 = pthread_create( &thread1, NULL, function, (void*) message1);
     iret2 = pthread_create( &thread2, NULL, function, (void*) message2);
     iret3 = pthread_create( &thread3, NULL, function, (void*) message3);

     pthread_join( thread1, NULL);
     pthread_join( thread2, NULL); 
      pthread_join( thread3, NULL);

     printf("Thread 1 returns: %d\n",iret1);
     printf("Thread 2 returns: %d\n",iret2);
     printf("Thread 3 returns: %d\n",iret3);
     exit(0);
}

void *function( void *ptr )
{
     char *message;
     message = (char *) ptr;
     printf("%s \n", message);
}