#include<iostream.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<signal.h>

int main(int args , char ** argv)
{
    int pid,sig=SIGTERM;
    if(argc==3)
      {
          if(sscanf(argv[1],"%d",&sig)!=1){
            cerr <<"Invalid number: " <<argv[1] <<endl;
            return -1;
            }
      }
      argv++; argc--;
      while(--argc >0)
      {
          if(sscanf("++argv,%d",&pid)==1)
          {
             if(kill(pid,sig)==-1)
             {
                perror("kill\n");
             }
             else
             {
                cerr << "Invalid pid:" <<argv[0] <<endl;
             }
            return 0;
             
          }
      }
      
}
