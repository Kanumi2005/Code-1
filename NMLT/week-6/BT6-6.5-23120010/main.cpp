#include <iostream>
#include "interface.h"
#include "implement.h"


int main() {
    do {
        interface();
    } while ( implement() );

    return 0;
}