#include <stdio.h>
#include "bst.h"

int main()
{
  Tree t = createTree();


  AVLinsert(t, 24);
  AVLinsert(t, 69);
  AVLinsert(t, 49);
  AVLinsert(t, 8000);
  AVLinsert(t, 777);
  AVLinsert(t, 666);

  imprime(t,"AVL");

  return 0;
}
