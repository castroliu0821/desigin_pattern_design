/**
 *  file : FactoryMethodExample.cpp
 *
 **/
#include <iostream>
#include "FactoryMethodExample.h"
#include "FactoryMethod_Product.h"
#include "FactoryMethod.h"

using namespace std;
using namespace FactoryMethodShell;

FactoryMethodExample::FactoryMethodExample()
    : Example("FactoryMethodExample")
{

}

FactoryMethodExample::~FactoryMethodExample()
{

}

void  FactoryMethodExample::run()
{
    BaseFactory* factory = new Factory_A;
    if (NULL != factory) {
        BaseProduct* product =  factory->CreateProduct();
        if (NULL != product) {
            cout << "Crete product name :" << product->name() << "Success" << endl;
            delete product;
        }
        delete factory;
        factory = NULL;
    }

    factory = new Factory_B;
    if (NULL != factory) {
        BaseProduct* product =  factory->CreateProduct();
        if (NULL != product) {
            cout << "Crete product name :" << product->name() << "Success" << endl;
            delete product;
        }
        delete factory;
        factory = NULL;
    }
}
