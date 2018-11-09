/**
 *  file : DemoObserverExample.cpp
 *
 **/
#include <iostream>
#include <string>

#include "DemoObserverExample.h"
#include "DemoSubject.h"
#include "DemoObserver.h"

using namespace std;
using namespace demo;

DemoObserverExample::DemoObserverExample()
    : Example(string("DemoObserverExample"))
{

}

DemoObserverExample::~DemoObserverExample()
{

}

void DemoObserverExample::run()
{
    concreteSubject subject;

    subject.RegObserver(new concreteObserverA);
    subject.RegObserver(new concreteObserverB);

    string status("Demo status 1");
    subject.setStatus(status);
    subject.OnNotifyUpdate();

    status = "Demo status 2";
    subject.setStatus(status);
    subject.OnNotifyUpdate();

    subject.UnRegisterAll();
}
