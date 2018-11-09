/**
 *  file : SimpleFactory_Product.cpp
 *
 **/

#include "SimpleFactory_Product.h"

namespace SimpleFactoryShell{

Product_A::Product_A()
    : BaseProduct("Product_A")
{

}

Product_A::~Product_A()
{
}

Product_B::Product_B()
    : BaseProduct("Product_B")
{
}

Product_B::~Product_B()
{
}

}
