/**
 *  file: AbstractFactoryDesignPattern.h
 *
 **/

#ifndef __ABSTRACTFACTORYDESIGNPATTERN_H_
#define __ABSTRACTFACTORYDESIGNPATTERN_H_

#include <string>
#include "AbstractFactory_Product.h"

namespace AbstractFactoryShell {

class BaseFactory {
public:
    BaseFactory(std::string name) : m_strName(name) {}
    virtual ~BaseFactory() {}

public:
    std::string name() {return m_strName;}
    virtual BaseProductA* CreateProductA() = 0;
    virtual BaseProductB* CreateProductB() = 0;

protected:
    std::string m_strName;
};

class FactoryX : public BaseFactory
{
public:
    FactoryX();
    virtual ~FactoryX();

public:
    virtual BaseProductA* CreateProductA();
    virtual BaseProductB* CreateProductB();
};

class FactoryY : public BaseFactory
{
public:
    FactoryY();
    virtual ~FactoryY();

public:
    virtual BaseProductA* CreateProductA();
    virtual BaseProductB* CreateProductB();
};

}   // namespace demoshell
#endif
/* EOF */

