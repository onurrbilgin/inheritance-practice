#include <iostream>
#include "practice.h"

using namespace Practice;

void test();

int main(){

    test();
    return 0;
}

void test(){

    FixedWageEmployee e1("onur", "1234-567-89", 3000);
    std::cout << e1.getName() << " " << e1.getSsn() << " " << e1.getWage() << std::endl;
}