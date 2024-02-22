//
// Created by huangfu on 24-2-22.
//

#include "ClassFactory.h"

ClassFactory &ClassFactory::getInstance() {
    static ClassFactory factory;
    return factory;
}

Obj * ClassFactory::getClassObjByName(const std::string &name) {
    if(constructFuncMap.find(name) == constructFuncMap.end()) {
        return nullptr;
    }
    return constructFuncMap[name]();
}

void ClassFactory::registClass(const std::string &name, const ConstructFunc& func) {
    constructFuncMap.insert(std::pair<std::string, ConstructFunc>(name,func));
}
