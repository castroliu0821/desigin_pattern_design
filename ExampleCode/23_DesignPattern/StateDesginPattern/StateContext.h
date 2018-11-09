/*
 *  file: StateContext.h
 *
*/

#ifndef __STATECONTEXT_H
#define __STATECONTEXT_H

#include "State.h"

class StateContext {
public:
    StateContext();
    ~StateContext();

    void handle_one();
    void handle_two();
    void handle_three();

private:
    void SetState(const baseState *);
    void GetState(baseState *);

private:
    baseState* m_curState;
};

#endif
