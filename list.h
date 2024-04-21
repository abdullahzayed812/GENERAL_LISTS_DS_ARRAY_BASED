#ifndef LIST_H
#define LIST_H 1

#define ListEntry int
#define MAX_LIST 100

typedef struct list {
  ListEntry entry[MAX_LIST];
  int size;
} List;

void initializeList(List*);
bool listEmpty(List*);
bool listFull(List*);
int listSize(List*);
void destroyList(List*);
void insertList(int, ListEntry, List*);
void deleteList(int, ListEntry*, List*);
void traverseList(List*, void (*visit)(ListEntry));
void retrieveList(int, ListEntry*, List*);
void replaceList(int, ListEntry, List*);

#endif