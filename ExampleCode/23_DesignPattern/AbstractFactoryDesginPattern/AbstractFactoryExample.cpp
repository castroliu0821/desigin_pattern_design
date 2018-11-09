/**
 *  file : AbstractFactroyExample.cpp
 *
 **/

#include <iostream>
#include <string>
#include "AbstractFactroyExample.h"
#include "AbstractFactory.h"
#include "AbstractFactory_Product.h"

using namespace std;
using namespace AbstractFactoryShell;

AbstractFactroyExample::AbstractFactroyExample()
    : Example("AbstractFactroyExample")
{

}

AbstractFactroyExample::~AbstractFactroyExample()
{

}

void AbstractFactroyExample::run()
{
    BaseFactory* Factory = new FactoryX;
    if (NULL == Factory) {
        return;
    }

    cout << "Create Factory :" << Factory->name() << " Success" << endl;
    BaseProductA* productA = Factory->CreateProductA();
    if (NULL != productA) {
        cout << "Create ProductA name: " << productA->name() << " uccess" << endl;
    }

    BaseProductB* productB = Factory->CreateProductB();
    if (NULL != productB) {
        cout << "Create ProductB name: " << productB->getName() << " Success" << endl;
    }

    delete productB;
    delete productA;
    delete Factory;

    productA = NULL;
    productB = NULL;
    Factory = NULL;

    Factory = new FactoryY;
    if (NULL == Factory) {
        return;
    }

    cout << "Create Factory :" << Factory->name() << " Success" << endl;
    productA = Factory->CreateProductA();
    if (NULL != productA) {
        cout << "Create ProductA name: " << productA->name() << " Success" << endl;
    }

    productB = Factory->CreateProductB();
    if (NULL != productB) {
        cout << "Create ProductB name: " << productB->getName() << " Success" << endl;
    }

    delete productB;
    delete productA;
    delete Factory;

    productA = NULL;
    productB = NULL;
    Factory = NULL;


}
