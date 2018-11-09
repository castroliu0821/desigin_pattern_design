/**
 *  file : FactoryMethod_Product.cpp
 *
 **/

#include "FactoryMethod_Product.h"

namespace FactoryMethodShell{

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
