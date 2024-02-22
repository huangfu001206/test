//
// Created by huangfu on 24-2-22.
//

#ifndef TEST_A_H
#define TEST_A_H

#include <iostream>
#include "RegistUtils.h"

class A : public Obj{
public:
    std::string name;

public:
    A();
    ~A();
    void show();
};

#endif //TEST_A_H
