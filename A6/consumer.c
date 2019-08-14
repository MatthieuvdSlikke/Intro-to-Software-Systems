#include"header.h"

void consumer(){
	char c;
	FILE *turn;	
	while(1){
        while((turn=fopen("TURN.txt", "r+"))==NULL);
        if(fgetc(turn)=='1'){
	FILE *data = fopen("DATA.txt", "rt");
	c=fgetc(data);
	printf("%c",c);
	fclose(data);
        rewind(turn);
	fputc('0', turn);
        fclose(turn);
	}
	if(fgetc(turn)=='2'){
	fclose(turn);
	exit(0);
	}
	else fclose(turn);
}
}


