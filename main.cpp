#include <iostream>
#include "coda.h"

int main(int argc, char **argv) {
    Coda<int> coda = Coda<int>();
    for (int i = 0; i<10; i++) {
        coda.enqueque(i);
    }
    coda.println();
    
    for (int i = 0; i<10; i++) {
        coda.dequeque();
    }
        
    return 0;
}
