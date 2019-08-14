#include"header.h"

void producer(){
	FILE *turn;
	FILE *mydata=fopen("myData.txt", "rt");
	char c;
		
	while(1){
	while((turn=fopen("TURN.txt", "r+"))==NULL);
	if(fgetc(turn) =='0'){
	c=fgetc(mydata);
		if(c==EOF){
        	rewind(turn);
		fputc('2', turn);
        	fclose(turn);
                exit(0);
                }
	FILE *data = fopen("DATA.txt", "w");
	fprintf(data,"%c",c); 
        fclose(data);
	rewind(turn);
	fputc('1', turn);
        fclose(turn);
	}
	else fclose(turn);
	}
	fclose(mydata);
}

