#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>    /* header file containing defination of getcwd*/

int main(void) {
    long current_location;
    char *buf;

    current_location = pathconf(".", _PC_PATH_MAX);/*The maximum length of a relative pathname when path or fd is the
              current   working   directory (open terminal and type man 3 pathconf to know both pathconf and _PC_PATH_MAX*/

    buf = malloc(current_location * sizeof(*buf));/*allocation the buffer size*/
    if (getcwd(buf, current_location) == NULL)  /*getcwd is an system call which copy absolute path of current working directory (open terminal and type man 3 getcwd to know it in detail)*/
    {
                perror("getcwd");
                 exit(EXIT_FAILURE);
    } 
    else 
    {           printf("%s\n", buf);    }/*print current working directory*/
    
    free(buf);
    return EXIT_SUCCESS;
}
 
