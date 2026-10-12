#include <stdio.h>
#include <string.h>
int main() {
char name[22];
scanf("%s", name);
printf("\"%s\"\n\"%20s\"\n\"%-20s\"\n\"%*s\"\n", name, name, name, strlen(name) + 5, name);
return 0;
}
