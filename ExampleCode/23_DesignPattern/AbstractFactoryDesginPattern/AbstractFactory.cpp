/**
 *  file : AbstractFactoryDesignPattern.cpp
 *
 **/

#include <iostream>
#include "AbstractFactory.h"

using namespace::std;
using namespace::AbstractFactoryShell;

FactoryX::FactoryX()
    : BaseFactory("Factory X")
{

}

FactoryX::~FactoryX()
{

}

BaseProductA* FactoryX::CreateProductA()
{
    return new ProductA_By_X;
}

BaseProductB* FactoryX::CreateProductB()
{
    return new ProductB_By_X;
}

FactoryY::FactoryY()
    : BaseFactory("Factory Y")
{

}

FactoryY::~FactoryY()
{

}

BaseProductA* FactoryY::CreateProductA()
{
    return new ProductA_By_Y;
}

BaseProductB* FactoryY::CreateProductB()
{
    return new ProductB_By_Y;
}



/* EOF */
