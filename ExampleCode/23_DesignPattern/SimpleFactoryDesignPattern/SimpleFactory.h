/**
 *  file : SimpleFactory.h
 *
 **/

#ifndef __SIMPLEFACTORY_H_
#define __SIMPLEFACTORY_H_

#include "SimpleFactory_Product.h"

namespace SimpleFactoryShell{

typedef enum SimpleProduct {
    eProduct_A,
    eProduct_B
}eProductType;

class SimpleFactory {
public:
    SimpleFactory();
    ~SimpleFactory();

public:
    BaseProduct* CreateProduct(eProductType type);
};

}
#endif
/* EOF */
