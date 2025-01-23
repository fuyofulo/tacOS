#ifndef TACOS_H
#define TACOS_H
#include <stddef.h>
#include <stdbool.h>


struct command_argument
{
    char argument[512];
    struct command_argument* next;
};

struct process_arguments
{
    int argc;
    char** argv;
};


void print(const char* filename);
int tacos_getkey();

void* tacos_malloc(size_t size);
void tacos_free(void* ptr);
void tacos_putchar(char c);
int tacos_getkeyblock();
void tacos_terminal_readline(char* out, int max, bool output_while_typing);
void tacos_process_load_start(const char* filename);
struct command_argument* tacos_parse_command(const char* command, int max);
void tacos_process_get_arguments(struct process_arguments* arguments);
int tacos_system(struct command_argument* arguments);
int tacos_system_run(const char* command);
void tacos_exit();
#endif
