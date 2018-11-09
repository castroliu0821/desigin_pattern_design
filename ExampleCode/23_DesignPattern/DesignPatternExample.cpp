/**
 *
 *  file : DesignPatternExample.cpp
 *
*/

#include <iostream>
#include <boost/format.hpp>
#include "DesignPatternExample.h"

using namespace std;

/**
 * @brief Example::Example
 * @param name
 */
Example::Example(std::string name)
    : m_Name(name)
{
}

string Example::name()
{
    return m_Name;
}

ExampleManager* ExampleManager::m_InsPtr = NULL;

/**
 * @brief ExampleManager::Instance
 * @return
 */
ExampleManager* ExampleManager::Instance()
{
    if (NULL == m_InsPtr) {
        m_InsPtr = new ExampleManager();
    }
    return m_InsPtr;
}

void ExampleManager::Dispose()
{
    if (NULL != m_InsPtr) {
        delete m_InsPtr;
        m_InsPtr = NULL;
    }
}

ExampleManager::ExampleManager()
    : m_pExpList(NULL)
{
    m_pExpList = new list<Example*>;
}

ExampleManager::~ExampleManager()
{
    if (NULL != m_pExpList) {
        delete m_pExpList;
        m_pExpList = NULL;
    }
}

bool ExampleManager::RegisterExample(Example* pExp)
{
    if (NULL == m_pExpList || NULL == pExp) {
        return false;
    }

    m_pExpList->push_back(pExp);
    return true;
}

bool ExampleManager::UngisterExample()
{
    if (NULL == m_pExpList) {
        return false;
    }
    list<Example*>::iterator iter = m_pExpList->begin();
    for (; iter != m_pExpList->end(); iter++) {
        Example* pExp = *iter;
        if (NULL != pExp) {
            delete pExp;
        }
    }
    return true;
}

void ExampleManager::RunExample()
{
    if (NULL == m_pExpList) {
        return;
    }
    list<Example*>::iterator iter = m_pExpList->begin();
    for (; iter != m_pExpList->end(); iter++) {
        Example* pExp = *iter;
        if (NULL == pExp) {
            continue;
        }
        cout << boost::format("------------Enter Example:[%1%]------------") % (*iter)->name().c_str() << endl;
        pExp->run();
        cout << boost::format("------------Exit Example:[%1%]------------") % (*iter)->name().c_str() << endl;
    }
}

/* EOF */
