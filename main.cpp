#include <iostream>
#include "pila.h"

int main(int argc, char **argv) {
    Pila<int> pila = Pila<int>();
    for (int i = 0; i<10; i++) {
        pila.push(i);
    }
    pila.println();
    
    for (int i = 0; i<10; i++) {
        pila.pop();
    }
        
    return 0;
}
