/**
 *  file : DemoSubject.h
 *
 **/
#ifndef __DEMOSUBJECT_H_
#define __DEMOSUBJECT_H_

#include <list>
#include <string>

#include "DemoObserver.h"

namespace demo {

class baseSubject {
public:
    baseSubject();
    virtual ~baseSubject();

public:
    virtual bool RegObserver(baseObserver* pObserver);
    virtual bool UnRegObserver(baseObserver* pObserver);
    virtual void OnNotifyUpdate();

public:
    std::list<baseObserver*>* m_ObsList;
};

class concreteSubject : public baseSubject {
public:
    concreteSubject();
    virtual ~concreteSubject();

public:
    virtual void OnNotifyUpdate();
    void UnRegisterAll();
    std::string getStatus();
    void setStatus(std::string& rMsg);

private:
    std::string* m_status;
};

}
#endif
/* EOF */
