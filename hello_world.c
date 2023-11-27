#include <system.h>
#include <stdio.h>
#include "sys/alt_stdio.h"
#include "altera_avalon_pio_regs.h"
//#include <usleep.h>

volatile char *LCD_display_ptr = (char *) 0xFF203050; // 16x2 character display

void write_string_to_lcd(char *text, int x, int y) {
    char instruction;

    instruction = x;
    if (y != 0)
        instruction |= 0x40; // set bit 6 for bottom row
    instruction |= 0x80;     // need to set bit 7 to set the cursor location

    *(LCD_display_ptr) = instruction; // write to the LCD instruction register

    while (*text) {
        *(LCD_display_ptr + 1) = *text; // write to the LCD Data register
        ++text;
    }
}

int main() {
    // Set the cursor to position (0, 0) and write "Hello, world!"
    write_string_to_lcd("Hello, world!", 0, 0);

    return 0;
}

