/**
 *  file : DemoObserver.cpp
 *
 **/
#include <iostream>
#include "DemoObserver.h"

using namespace std;

namespace demo
{

concreteObserverA::concreteObserverA()
{
    cout << "concreteObserveA construct" << endl;
}

concreteObserverA::~concreteObserverA()
{
    cout << "concreteObserveA deconstruct" << endl;
}

void concreteObserverA::OnUpgrade(std::string &rMsg)
{
    cout << "On notify message:" << rMsg << endl;
    doAction_A();
}

void concreteObserverA::doAction_A()
{
    cout << "Do A Action"<< endl;
    return;
}


concreteObserverB::concreteObserverB()
{
    cout << "concreteObserveB construct" << endl;
}

concreteObserverB::~concreteObserverB()
{
    cout << "concreteObserveB deconstruct" << endl;
}

void concreteObserverB::OnUpgrade(std::string &rMsg)
{
    cout << "On notify message:" << rMsg << endl;
    doAction_B();
}

void concreteObserverB::doAction_B()
{
    cout << "Do B Action"<< endl;
    return;
}
}
/* EOF */
