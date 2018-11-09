/**
 *
 *  file : FactoryMethod_Product.h
 *
*/
#ifndef __SIMPLEFACTORY_PRODUCT_H__
#define __SIMPLEFACTORY_PRODUCT_H__

#include <string>

namespace FactoryMethodShell{

class BaseProduct
{
public:
    BaseProduct(std::string sName) : m_strName(sName) { }
    virtual ~BaseProduct() { }
    std::string name(){ return m_strName;}

protected:
    std::string m_strName;
};

class Product_A : public BaseProduct
{
public:
    Product_A();
    virtual ~Product_A();
};

class Product_B : public BaseProduct
{
public:
    Product_B();
    virtual ~Product_B();
};

}
#endif
/* EOF */
