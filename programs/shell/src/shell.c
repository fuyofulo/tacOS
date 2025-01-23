#include "shell.h"
#include "stdio.h"
#include "stdlib.h"
#include "tacos.h"
int main(int argc, char** argv)
{
    print("tacOS v1.0.0\n");
    while(1) 
    {
        print("> ");
        char buf[1024];
        tacos_terminal_readline(buf, sizeof(buf), true);
        print("\n");
        tacos_system_run(buf);
        
        print("\n");
    }
    return 0;
}
