#include <stdio.h>
#include <string.h>
#define frfr "LinuxDistro"
int main() {
char yy[] = "2026";
const char YY[] = "2026";
printf("DISTRO: %s\nRDATE: %s\nSTRLEN: %d\nSIZEOF: %zd\n", frfr, yy, strlen(frfr), sizeof frfr);
return 0;
}
