#include "kernel_io.h"
#include "barestring.h"

extern "C" void kernel_main(){
    print_clear();
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("Welcome to EntropyWare!, ");
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("ver: pre-release\n");;
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_newline();
    print_str("Tip: Type help for a list of commands");
    print_newline();
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    int index = strfind("foo bar", 'r');
    char* out = inttostr(index);
    print_str("\n---> ");
    char* messagee = get_input(256);
    print_newline();
    print_str(messagee);
}
