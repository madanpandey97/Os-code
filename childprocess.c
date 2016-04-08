#include<stdio.h>
#include  <sys/types.h>
/*wrote by madan pandey*/
#define COUNT_PROCESS 200
void Process_child(void);
void Process_parent(void);
int main(){
                int p_id=fork();
                if(P_id<0){
                        printf("process is now  created);
                              }
                 else if(p_id==0){
                          Process_child();
                              }
                  else{
                        wait();
                        Process_parent();
                      }
                }

void Process_child(){
            int i,n=10;
            printf("process id of children process : %d",getpid());
           printf("process id of parent process : %d",getpid());
            for(i=2;i<=n+1;i+=2)
            printf("%d\n",i);
           printf("   ***------- Child process is done----- ***\n");
        }

void  ParentProcess(void)
{
     int   i,n=10;
      printf("process id of current process :%d\n",getpid( ));
      printf("process id of parent process ID :%d\n",getpid( ));
       for(i=1;i<=n;i+=2)
        printf("%d\n",i);
     printf("*** -----Parent is done----- ***\n");
}


