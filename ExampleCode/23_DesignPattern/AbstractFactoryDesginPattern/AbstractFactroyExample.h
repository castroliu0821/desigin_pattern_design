/**
 *  file : AbstractFactroyExample.h
 *
 **/

#ifndef __ABSTRACTFACTROYEXAMPLE_H_
#define __ABSTRACTFACTROYEXAMPLE_H_

#include "DesignPatternExample.h"

class AbstractFactroyExample : public Example
{
public:
    AbstractFactroyExample();
    virtual ~AbstractFactroyExample();

public:
    virtual void run();
};

#endif
/* EOF */
