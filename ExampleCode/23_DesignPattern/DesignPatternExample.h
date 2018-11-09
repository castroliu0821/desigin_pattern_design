/**
 *
 *  file : DesignPatternExample.h
 *
*/

#ifndef __DESIGNPATTERNEXAMPLE_H_
#define __DESIGNPATTERNEXAMPLE_H_

#include <string>
#include <list>
/**
 * @brief The Example class
 *
 * pure virtual base class
 */

class Example {
public:
    Example(std::string name);
    virtual ~Example() {}

public:
    virtual std::string name();
    virtual void run() = 0;

private:
    std::string m_Name;
};

/**
 * @brief The ExampleManager class
 */
class ExampleManager {
public:
    static ExampleManager* Instance();
    static void Dispose();

public:
    bool RegisterExample(Example* pExp);
    bool UngisterExample();

    void RunExample();
private:
    ExampleManager();
    ExampleManager(ExampleManager&);
    ExampleManager& operator= (ExampleManager&);
    ~ExampleManager();

private:
    std::list<Example*>*    m_pExpList;
    static ExampleManager*  m_InsPtr;
};

#endif
/* EOF */
