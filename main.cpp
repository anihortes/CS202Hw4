#include <iostream>
#include "Box.h"

int main() {
    FilledBox test;
    test.print(std::cout);
    test.setHeight(4);
    test.setWidth(4);
    test.print(std::cout);
    return 0;
}
