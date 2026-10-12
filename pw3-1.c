#include <stdio.h>
#include <string.h>
int main() {
char g[20] = "SibSUTIS";
printf("SIZEOF: %zd\nSTRLEN: %zd\nFREE_BYTES: %zd\n", sizeof g, strlen(g), sizeof g - (strlen(g) + 1));
return 0;
}
