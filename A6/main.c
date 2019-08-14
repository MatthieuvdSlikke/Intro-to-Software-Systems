#include"header.h"

//project of Matthieu van der Slikke 260662602 and Sarah Moreno

int main (int argc, char* argv[]){

	FILE *turn=fopen("TURN.txt", "at");
	fputc('0', turn);
	fclose(turn);
	FILE *data = fopen("DATA.txt", "at");
	fclose(data);

	int pid; 
	switch (pid= fork()){
	
	case -1: 
		perror("fork");
		exit(0);
	case 0:
		consumer();
	default:
		producer();
	}
	exit(0);
}
