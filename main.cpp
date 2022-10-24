#include <iostream>
#include "lista.h"

int main(int argc, char **argv) {
    Lista<int> a = Lista<int>();
    Lista<int>::Pos t = a.head();
    for (int i = 0; i<10; i++) {
        t = a.insert(t,i);
    }
    a.print();
        
    return 0;
}
