#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
void *firefox(void *arg)
{
      system("firefox");
      pthread_exit(0);
}
 void *text(void *arg)
{
     System("hello");
     pthred_exit(0);
}
 void main()
{
pthread_t t1,t2;
pthread_create(&t1,NULL,firefox,NULL);
pthread_create(&t2,NULL,hello,NULL);

pthread_join(t1,NULL);
pthread_join(t2,NULL);
printf("\nthreads are finished");
}