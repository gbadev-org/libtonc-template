#include <gba.h>
#include <stdio.h>

int main(void) {

	irqInit();
	irqEnable(IRQ_VBLANK);

	consoleDemoInit();

	iprintf("\x1b[10;10HHello World!\n");

	while (1) {
		VBlankIntrWait();
	}
}
