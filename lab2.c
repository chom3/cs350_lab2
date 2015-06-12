// Write a program (on Linux) that handles signals using the following rules:
// Accepts no input
// Busy waits on while loop 
// When user presses Ctrl-C or Ctrl-Z, it prints out "OH NO!!!" and continues the busy wait 
// Therefore you must write signal handlers for SIGINT (Ctrl-C) and SIGTSTP (Ctrl-Z) 
// To terminate the program, type "kill -9 [YOUR_PROCESS_ID]".
//This command sends the SIGKILL signal which cannot be caught by your program! 

// For information on signal, refer to:      http://www.cs.cf.ac.uk/Dave/C/node24.html 

#include <stdio.h>
#include <signal.h>
 
// signal handler for SIGINT
void sigintHandler(int sig_num)
{
    signal(SIGINT, sigintHandler);
    printf("OH NO!!!\n");
    fflush(stdout);
}
 
// signal handler for SIGTSTP
void sigtstpHandler(int sig_num)
{
    signal(SIGTSTP, sigtstpHandler);
    printf("OH NO!!!\n");
    fflush(stdout);
}


int main ()
{
    signal(SIGINT, sigintHandler);
    signal(SIGTSTP, sigtstpHandler);
    //busy waits loop 
    while(1)
    {        
    }
    return 0;
}
