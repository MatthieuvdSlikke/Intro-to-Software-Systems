#include<stdio.h>
#include"list.h"
#include<stdlib.h>

extern struct NODE *aNode;

int main(void){

newList();

int value;

printf("enter positive integerss to complete the list and a integer value to stopadding nodes: ");

while(value>0){
scanf("%d",&value);
if (value<0) break;
addNode(value);
}
printf("\n Your list:");
prettyPrint();
}
