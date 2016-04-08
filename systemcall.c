#include<stdio.h>
#include<stdlib.h>
#include  <sys/types.h>


int main(){
    
      pid_t p_id;
     p_id=fork();
     int i,j;
      if(p_id<0){
          printf("fork failed");
         return 0;
              }
       else if(p_id==0){
         printf("child proces is completed %d\n",getpid());
         for(i=1;i<=10;i++){
        printf("%d\n",5*i);
          }
         }
     else {
         wait();
         printf("parent process complete %d\n",getpid());
}
  }

 




     

