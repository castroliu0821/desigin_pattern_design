/*
 *  fiel : StateContext.cpp
 *
 */

#include "StateContext.h"
#include "State.h"

StateContext::StateContext()
{
    m_curState = new ConcreteStateA;
}

StateContext::~StateContext()
{
    if (NULL != m_curState)
    delete m_curState;
}

void StateContext::handle_one()
{
    if (NULL != m_curState) {
        m_curState->Handle_state_one();
        delete m_curState;
        m_curState = new ConcreteStateB;
    }
}

void StateContext::handle_two()
{
    if (NULL != m_curState) {
        m_curState->Handle_state_two();
        delete m_curState;
        m_curState = new ConcreteStateC;
    }
}

void StateContext::handle_three()
{
    if (NULL != m_curState) {
        m_curState->Handle_state_three();
        delete m_curState;
        m_curState = new ConcreteStateA;
    }
}
