/**
 *  file : DemoSubject.cpp
 *
 **/
#include <iostream>
#include <string>
#include "DemoSubject.h"

using namespace std;

namespace demo
{

baseSubject::baseSubject()
{
    m_ObsList = new list<baseObserver*>;
    cout << "baseSubject construct" << endl;
    return;
}

baseSubject::~baseSubject()
{
    if (NULL != m_ObsList) {
        delete m_ObsList;
        m_ObsList = NULL;
    }
    cout << "baseSubject desconstruct" << endl;
}

bool baseSubject::RegObserver(baseObserver *pObserver){
    if (NULL == pObserver || NULL == m_ObsList) {
        return false;
    }

    m_ObsList->push_back(pObserver);
    return true;
}

bool baseSubject::UnRegObserver(baseObserver *pObserver)
{
    if (NULL == pObserver || NULL == m_ObsList) {
        return false;
    }

    list<baseObserver*>::iterator iter = m_ObsList->begin();
    for(; iter != m_ObsList->end();) {
        if (pObserver == *iter) {
            m_ObsList->erase(iter);
            break;
        }
    }
    return true;
}

void baseSubject::OnNotifyUpdate()
{

}

/**
 * @brief concreteSubject::concreteSubject
 *
 */
concreteSubject::concreteSubject()
{
    m_status = new string;
    cout << "concreteSubject construct" << endl;
    return;
}

concreteSubject::~concreteSubject()
{
    if (NULL != m_status) {
        delete m_status;
        m_status = NULL;
    }
    cout << "concreteSubject deconstruct" << endl;
}

// on notify vaild observer for each
void concreteSubject::OnNotifyUpdate()
{
    if (NULL == m_status || NULL == m_ObsList) {
        return;
    }

    list<baseObserver*>::iterator iter = m_ObsList->begin();
    for(; iter != m_ObsList->end(); ++iter) {
        baseObserver* observer = *iter;
        if (NULL == observer) {
            continue;
        }

        observer->OnUpgrade(*m_status);
    }
}

void concreteSubject::UnRegisterAll()
{
    if (NULL == m_status || NULL == m_ObsList) {
        return;
    }

    list<baseObserver*>::iterator iter = m_ObsList->begin();
    for(; iter != m_ObsList->end(); ++iter) {
        baseObserver* observer = *iter;
        if (NULL == observer) {
            continue;
        }
        delete observer;
    }
}

string concreteSubject::getStatus()
{
    if (NULL == m_status) {
        return "";
    }

    return *m_status;
}

void concreteSubject::setStatus(string &rMsg)
{
    if (NULL == m_status) {
        return;
    }

    *m_status = rMsg;
}

}
/* EOF */
