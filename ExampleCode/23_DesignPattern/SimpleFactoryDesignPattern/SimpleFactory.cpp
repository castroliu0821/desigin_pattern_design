/**
 *  file : SimpleFactory.cpp
 *
 **/
#include "SimpleFactory.h"

namespace SimpleFactoryShell{

SimpleFactory::SimpleFactory()
{
}
SimpleFactory::~SimpleFactory()
{
}

BaseProduct* SimpleFactory::CreateProduct(eProductType type)
{
    BaseProduct *ret = NULL;
    switch (type) {
    case eProduct_A:
        ret = new Product_A();
        break;
    case eProduct_B:
        ret = new Product_B();
        break;
    default:
        break;
    }

    return ret;
}
}

/* EOF */
