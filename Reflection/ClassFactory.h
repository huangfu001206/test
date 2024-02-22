//
// Created by huangfu on 24-2-22.
//

#ifndef TEST_CLASSFACTORY_H
#define TEST_CLASSFACTORY_H

#include <unordered_map>
#include <string>
#include "Obj.h"

typedef std::function<Obj*()> ConstructFunc;
using ConstructFuncPtr = Obj*(*)();

class ClassFactory {
private:
    ClassFactory(){}
    std::unordered_map<std::string, ConstructFunc> constructFuncMap;
public:
    static ClassFactory& getInstance();
    Obj * getClassObjByName(const std::string& name);
    void registClass(const std::string& name, const ConstructFunc&);
};


#endif //TEST_CLASSFACTORY_H
