#include <stdio.h>

int main(){
    char name[101];
    scanf("%[^\n]s", name);
    printf("Congrats \"%s\" for joining the CS department at BINUS.\n", name);
}