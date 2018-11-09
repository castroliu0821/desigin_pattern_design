/**
 *  file : AbstractFactory_Product.h
 *
 **/

#ifndef __ABSTRACTFACTORY_PRODUCT_H__
#define __ABSTRACTFACTORY_PRODUCT_H__

#include <string>

namespace AbstractFactoryShell {

class BaseProductA
{
public:
    BaseProductA(std::string sName) : m_strName(sName) { }
    virtual ~BaseProductA() { }
    std::string name(){ return m_strName;}

protected:
    std::string m_strName;
};

class BaseProductB
{
public:
    BaseProductB(std::string sName) : m_strName(sName) { }
    virtual ~BaseProductB() { }
    std::string getName(){ return m_strName;}

protected:
    std::string m_strName;
};

class ProductA_By_X : public BaseProductA {
public:
    ProductA_By_X();
    virtual ~ProductA_By_X();
};

class ProductB_By_X : public BaseProductB {
public:
    ProductB_By_X();
    virtual ~ProductB_By_X();
};

class ProductA_By_Y : public BaseProductA {
public:
    ProductA_By_Y();
    virtual ~ProductA_By_Y();
};

class ProductB_By_Y : public BaseProductB {
public:
    ProductB_By_Y();
    virtual ~ProductB_By_Y();
};

}
#endif
/* EOF */
