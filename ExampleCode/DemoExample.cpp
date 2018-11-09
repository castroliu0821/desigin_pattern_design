#include <iostream>
#include <string>

#include "DesignPatternExample.h"
#include "DemoObserverExample.h"
#include "AbstractFactroyExample.h"
#include "FactoryMethodExample.h"
#include "SimpleFactoryExample.h"
#include "StateDesignPatternExample.h"

using namespace std;

int main()
{
    ExampleManager* pExpManager = ExampleManager::Instance();
    if (NULL == pExpManager) {
        return -1;
    }

    pExpManager->RegisterExample(new SimpleFactoryExample);
    pExpManager->RegisterExample(new FactoryMethodExample);
    pExpManager->RegisterExample(new AbstractFactroyExample);
    pExpManager->RegisterExample(new DemoObserverExample);
    pExpManager->RegisterExample(new StateDesignPatternExample);

    pExpManager->RunExample();

    pExpManager->UngisterExample();
    pExpManager->Dispose();
	cin.get();
	return 0;
}

/* EOF */
