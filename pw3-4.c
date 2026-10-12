#include <stdio.h>
#include <string.h>
int main() {
char word[] = "\x53\x4F\x56\x41";
printf("%s\nSTRLEN: %zd\nSIZEOF: %zd\n", word, strlen(word), sizeof(word));
return 0;
}
