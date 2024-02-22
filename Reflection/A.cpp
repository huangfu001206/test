//
// Created by huangfu on 24-2-22.
//

#include "A.h"

A::~A() {
    std::cout<<"A 析构函数 调用"<<std::endl;
}

void A::show() {
    std::cout<<name<<std::endl;
}

A::A() {
    std::cout<<"A 构造函数 调用"<<std::endl;
}

REGISTCLASS(A)
