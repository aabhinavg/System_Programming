#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(void) {
    long current_location;
    char *buf;

    current_location = pathconf(".", _PC_PATH_MAX);
    buf = malloc(current_location * sizeof(*buf));
    if (getcwd(buf, current_location) == NULL) 
    {
                perror("getcwd");
                 exit(EXIT_FAILURE);
    } 
    else 
    {           printf("%s\n", buf);    }
    
    free(buf);
    return EXIT_SUCCESS;
}
~    
