/**
 *  file : SimpleFactory_Product.cpp
 *
 **/
#ifndef __SIMPLEFACTORY_PRODUCT_CPP__
#define __SIMPLEFACTORY_PRODUCT_CPP__

#include "FactoryMethod_Product.h"

namespace FactoryMethodShell {

class BaseFactory {
public:
    BaseFactory() {}
    virtual ~BaseFactory() {}

public:
    virtual BaseProduct* CreateProduct() = 0;
};

class Factory_A : public BaseFactory
{
public:
    Factory_A();
    virtual ~Factory_A();

public:
    BaseProduct* CreateProduct();
};

class Factory_B : public BaseFactory
{
public:
    Factory_B();
    virtual ~Factory_B();

public:
    BaseProduct* CreateProduct();
};
}

#endif
/* EOF */
