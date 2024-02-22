//
// Created by huangfu on 24-2-22.
//

#ifndef TEST_REGISTUTILS_H
#define TEST_REGISTUTILS_H

#include "ClassFactory.h"

class RegistUtils {
public:
    RegistUtils(const std::string &name, ConstructFuncPtr func);
};

#define REGISTCLASS(className)                                     \
       className* objCreator##className() {                        \
           return new className;                                   \
       }                                                           \
       RegistUtils utils##className(#className, (ConstructFuncPtr)objCreator##className);

#endif //TEST_REGISTUTILS_H
