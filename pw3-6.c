#include <stdio.h>
int main() {
char strr[50];
int width;
scanf("%s %d", strr, &width);
printf("%*s\n%-*s\n", width, strr, width, strr);
return 0;
}
