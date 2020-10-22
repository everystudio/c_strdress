#include <stdio.h>
int main(void){
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int t = strlen(strtok(str,"\n"));
    //printf("%d\n",t);
    for( int i = 0 ; i < t+2 ; i++){
        printf("+");
    }
    printf("\n");
    printf("+%s+\n", str);
    for( int i = 0 ; i < t+2 ; i++){
        printf("+");
    }
    return 0;
}