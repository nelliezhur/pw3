#include <stdio.h>
#include <string.h>
int main() {
char bb;
scanf("%c", &bb);
printf("CODE_DEC: %d\nCODE_HEX: %x\nCODE_OCT: %o\nUPPER: %c\nNEXT: %c\nPREV: %c\n", bb, bb, bb, bb - 32, bb + 1, bb - 1);
return 0;
}
