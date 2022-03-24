#include <stdio.h>
#include <curses.h>

void main(){
	char ch;
    while(1){
        printf(">> (Hit q to quit)");
        ch=getc(stdin);
	if(ch=='q') break;
        printf("\n");
    }


}
