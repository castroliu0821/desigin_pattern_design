/**
 *  file : SimpleFactoryExample.cpp
 *
 **/
#include <iostream>
#include "SimpleFactoryExample.h"
#include "SimpleFactory.h"
#include "SimpleFactory_Product.h"

using namespace std;
using namespace SimpleFactoryShell;

SimpleFactoryExample::SimpleFactoryExample()
    : Example("SimpleFactoryExample")
{

}

SimpleFactoryExample::~SimpleFactoryExample()
{

}

void  SimpleFactoryExample::run()
{
    SimpleFactory cFactory;

    BaseProduct* A = cFactory.CreateProduct(eProduct_A);
    if (NULL != A) {
        cout << "Create product :"<< A->name() << " Success!"<< endl;
    }
    delete A;

    BaseProduct* B = cFactory.CreateProduct(eProduct_B);
    if (NULL != B) {
        cout << "Create product :"<< B->name() << " Success!"<< endl;
    }
    delete B;
}
