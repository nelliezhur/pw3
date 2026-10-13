#include <stdio.h>
#include <string.h>
int main() {
char word[] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64";
printf("%s\nSTRLEN: %zd\nSIZEOF: %zd\n", word, strlen(word), sizeof(word));
return 0;
}
