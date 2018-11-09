/*
 *  file : StateDesignPatternExample.cpp
 *
 */

#include <iostream>
#include <string>

#include "StateDesignPatternExample.h"
#include "StateContext.h"

using namespace std;

StateDesignPatternExample::StateDesignPatternExample()
    : Example("StateDesignPatternExample")
{

}

StateDesignPatternExample::~StateDesignPatternExample()
{

}

void StateDesignPatternExample::run()
{
    StateContext * context = new StateContext;

    if (NULL != context) {
        cout << "condition one happend" << endl;
        context->handle_one();

        cout << "condition two happend" << endl;
        context->handle_two();

        cout << "condition three happend" << endl;
        context->handle_three();

        delete context;
    }
}
