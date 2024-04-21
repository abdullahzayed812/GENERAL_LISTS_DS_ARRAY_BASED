#include <iostream>

#include "list.h"

void print(ListEntry e) { std::cout << e << "\n"; }

int main() {
  List l;
  initializeList(&l);

  // Insert in pos = 0
  insertList(0, 10, &l);

  // Use list as stack -> insert at the end and retrieve from end.
  insertList(listSize(&l), 20, &l);
  insertList(listSize(&l), 30, &l);
  insertList(listSize(&l), 40, &l);
  insertList(listSize(&l), 50, &l);
  insertList(listSize(&l), 60, &l);

  // traverseList(&l, print);

  int e = 0;

  retrieveList(listSize(&l) - 1, &e, &l);
  retrieveList(listSize(&l) - 1, &e, &l);
  retrieveList(listSize(&l) - 1, &e, &l);
  retrieveList(listSize(&l) - 1, &e, &l);
  retrieveList(listSize(&l) - 1, &e, &l);
  retrieveList(listSize(&l) - 1, &e, &l);

  // std::cout << e << "\n";  // e = 60

  destroyList(&l);

  // User list as queue -> insert at the end and retrieve from front.
  insertList(listSize(&l), 70, &l);
  insertList(listSize(&l), 80, &l);
  insertList(listSize(&l), 90, &l);
  insertList(listSize(&l), 100, &l);

  int el = 0;

  retrieveList(0, &el, &l);
  retrieveList(0, &el, &l);
  retrieveList(0, &el, &l);
  retrieveList(0, &el, &l);

  std::cout << el << "\n";

  traverseList(&l, print);

  destroyList(&l);
}