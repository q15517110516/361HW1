//#include <stdio.h>
//#include <unistd.h>
//#include "common_threads.h"
//
//sem_t s; 
//
//void *child(void *arg) {
//    printf("child\n");
//     use semaphore here
//	sem_wait(&s);
//	sleep(1);
//    return NULL;
//}
//
//int main(int argc, char *argv[]) {
//    pthread_t p;
//     init semaphore here
//	sem_init(&s,1,1);
//    printf("parent: begin\n");
//    Pthread_create(&p, NULL, child, NULL);
//     use semaphore here
//	sem_wait(&s);
//    printf("parent: end\n");
//    return 0;
//}
//
