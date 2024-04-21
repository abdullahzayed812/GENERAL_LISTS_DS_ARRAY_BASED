#include "list.h"

void initializeList(List* list) { list->size = 0; }

bool listEmpty(List* list) { return !list->size; }

bool listFull(List* list) { return list->size == MAX_LIST; }

int listSize(List* list) { return list->size; }

void destroyList(List* list) { list->size = 0; }

void insertList(int pos, ListEntry ele, List* list) {
  for (int i = list->size - 1; i >= pos; i--) {
    list->entry[i + 1] = list->entry[i];
  }

  list->entry[pos] = ele;
  list->size++;
}

void deleteList(int pos, ListEntry* ele, List* list) {
  *ele = list->entry[pos];

  for (int i = pos + 1; i <= list->size - 1; i++) {
    list->entry[i - 1] = list->entry[i];
  }

  list->size--;
}

void retrieveList(int pos, ListEntry* ele, List* list) { *ele = list->entry[pos]; }

void replaceList(int pos, ListEntry ele, List* list) { list->entry[pos] = ele; }

void traverseList(List* list, void (*visit)(ListEntry)) {
  for (int i = 0; i < list->size; i++) {
    (*visit)(list->entry[i]);
  }
}