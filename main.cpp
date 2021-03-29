#include <iostream>
#include "Box.h"

int main() {
    FilledBox test;
    test.print(std::cout);
    test.setHeight(4);
    test.setWidth(4);
    test.print(std::cout);

    HollowBox hollow;
    hollow.print(std::cout);
    hollow.setWidth(5);
    hollow.setHeight(5);
    hollow.print(std::cout);

    CheckeredBox check;
    check.print(std::cout);
    check.setHeight(6);
    check.setWidth(6);
    check.print(std::cout);
    return 0;
}
