#include<stdlib.h>
#include"list.h"
#include<stdio.h>

struct NODE *aNode;

void newList(){
aNode=NULL;
}

int addNode(int value){
struct NODE *temp;
temp = (struct NODE*)malloc(sizeof(struct NODE));
if(temp==NULL) exit(1);
temp->data=value;
if(aNode==NULL) temp->next=NULL;
else temp->next=aNode;
aNode= temp;
return 0;
}

void prettyPrint(){
if (aNode == NULL) {
printf("Your list is empty.\n");
}
while(aNode!=NULL){
printf("%d",aNode->data);
aNode=aNode->next;
}
printf("\n");
}


