#include <system.h>
#include <stdio.h>
#include "sys/alt_stdio.h"
#include "altera_avalon_pio_regs.h"
//#include <usleep.h>

int main() {
    printf("Reading Keys...\n");
    int counter = 0;
    while (1) {
        int keys_value = IORD_ALTERA_AVALON_PIO_DATA(KEYS_BASE);

        if (keys_value != 0) {
            printf("Keys Value: %d\n", keys_value);
        }
        while (counter < 100000) {
        	counter++;
        }
        counter = 0;
    }
    return 0;
}
