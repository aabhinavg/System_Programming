# System_Programming

This repo will contain various unix command implementation in c language

## pwd.c ##
This file is an implementation of pwd command of linux in C language

In header file #include<unistd.h> <br>
<li> Defination of getcwd system call is given whose function is to function copies an absolute pathname of the current  working  
 &nbsp;&nbsp;    directory to the array pointed to by buf, which is of length size.
<li> Its signature is  char *getcwd(char *buf, size_t size); It return null if the buffer size is less than the size of the current
 &nbsp;&nbsp; working directory therefore this error should be check.
  
