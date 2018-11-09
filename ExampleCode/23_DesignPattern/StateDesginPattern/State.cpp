/*
 *  file: State.cpp
 *
*/
#include <iostream>
#include "State.h"

using namespace std;

// ConcreteState A
ConcreteStateA::ConcreteStateA()
    : baseState("ConcreteStateA")
{

}

ConcreteStateA::~ConcreteStateA()
{

}

void ConcreteStateA::Handle_state_one()
{
    cout << "Now : State A Handle one, Care it" << endl;
}

void ConcreteStateA::Handle_state_two()
{
    cout << "Now : State A Handle two, DO NOT CARE" << endl;
}

void ConcreteStateA::Handle_state_three()
{
    cout << "Now : State A Handle three, DO NOT CARE" << endl;
}

// ConcreteState B
ConcreteStateB::ConcreteStateB()
    : baseState("ConcreteStateB")
{

}

ConcreteStateB::~ConcreteStateB()
{

}

void ConcreteStateB::Handle_state_one()
{
    cout << "Now : State B Handle one, DO NOT CARE" << endl;
}

void ConcreteStateB::Handle_state_two()
{
    cout << "Now : State B Handle two, Care it" << endl;
}

void ConcreteStateB::Handle_state_three()
{
    cout << "Now : State B Handle three, DO NOT CARE" << endl;
}

// ConcreteState C
ConcreteStateC::ConcreteStateC()
    : baseState("ConcreteStateC")
{

}

ConcreteStateC::~ConcreteStateC()
{

}

void ConcreteStateC::Handle_state_one()
{
    cout << "Now : State C Handle one, DO NOT CARE" << endl;
}

void ConcreteStateC::Handle_state_two()
{
    cout << "Now : State C Handle two, DO NOT CARE" << endl;
}

void ConcreteStateC::Handle_state_three()
{
    cout << "Now : State C Handle three, Care it" << endl;
}
