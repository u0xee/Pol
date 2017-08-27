#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** args){
	if(argc < 2){
		printf("%s%s%s\n","usage: ",args[0], " filename");
		return -1;	
	}
	
	printf("%s%s\n","Starting Lexing on ",args[0]);
}
