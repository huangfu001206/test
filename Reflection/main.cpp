//
// Created by huangfu on 24-2-22.
//

#include <iostream>
#include "A.h"

int main() {
    std::cout<<"------------ Reflection --------------"<<std::endl;
    auto factory = ClassFactory::getInstance();
    A* a = (A*)factory.getClassObjByName("A");
    a->name = "huangfu";
    a->show();
    std::cout<<"------------ Reflection --------------"<<std::endl;
    return 0;
}