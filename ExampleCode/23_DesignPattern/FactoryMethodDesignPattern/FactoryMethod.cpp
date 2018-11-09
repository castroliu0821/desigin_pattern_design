/**
 *  file : FactoryMethod_Product.cpp
 *
 **/
#include <iostream>
#include "FactoryMethod.h"

using namespace std;
using namespace FactoryMethodShell;

Factory_A::Factory_A()
{

}

Factory_A::~Factory_A()
{

}

BaseProduct* Factory_A::CreateProduct()
{
    cout << "Factory A Produce A"<< endl;
    return new Product_A;
}

Factory_B::Factory_B()
{

}

Factory_B::~Factory_B()
{

}

BaseProduct* Factory_B::CreateProduct()
{
    cout << "Factory B Produce B"<< endl;
    return new Product_B;
}

/* EOF */
