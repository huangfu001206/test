//
// Created by huangfu on 24-2-22.
//

#include "RegistUtils.h"

RegistUtils::RegistUtils(const std::string &name, ConstructFuncPtr func) {
    ClassFactory::getInstance().registClass(name, func);
}
