/**
 *  file : DemoObserver.h
 *
 **/

#ifndef __DEMOOBSERVER_H_
#define __DEMOOBSERVER_H_

#include <string>

namespace demo
{

class baseObserver {
public:
    baseObserver() {}
    virtual ~baseObserver() {}

public:
    virtual void OnUpgrade(std::string& rMsg) = 0;
};

class concreteObserverA : public baseObserver {
public:
    concreteObserverA();
    virtual ~concreteObserverA();

public:
    virtual void OnUpgrade(std::string& rMsg);
    void doAction_A();
};

class concreteObserverB: public baseObserver {
public:
    concreteObserverB();
    virtual ~concreteObserverB();

public:
    virtual void OnUpgrade(std::string& rMsg);
    void doAction_B();
};

}
#endif
/* EOF */
