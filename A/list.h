#ifndef LIST_H
#define LIST_H

struct NODE{
int data;
struct NODE *next;
};

void newList();
int addNode(int);
void prettyPrint();

#endif

