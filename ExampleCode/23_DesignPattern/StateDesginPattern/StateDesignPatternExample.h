/*
 *  file : StateDesignPatternExample.h
 *
 */
#ifndef __STATEDESIGNPATTERNEXAMPLE_H_
#define __STATEDESIGNPATTERNEXAMPLE_H_

#include "DesignPatternExample.h"

class StateDesignPatternExample : public Example
{
public:
    StateDesignPatternExample();
    virtual ~StateDesignPatternExample();

public:
    virtual void run();
};

#endif
