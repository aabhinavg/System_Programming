# System_Programming

This repo will contain various unix command implementation in c language

## pwd.c ##
This file is an implementation of pwd command of linux in C language

In header file <b>#include<unistd.h></b> <br>
<li>Defination of <b>getcwd</b> system call is given whose function is to copies an absolute pathname of &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;the current working directory to the array pointed to by buf, which is of length size.
  <li>Its signature is <b>char *getcwd(char *buf, size_t size);</b> It return null if the buffer size is less &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;than the size of the current working directory therefore this error should be check.
  <li>We can use the system call pathconf declare in <b>unistd.h</b> header for giving path of the 
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;directory which contain _PC_PATH_MAX which have maximum length of a filename in the &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;directory path.(for more detail refer man 3 pathconf)
  
  
