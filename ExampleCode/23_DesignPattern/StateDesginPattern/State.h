/*
 *  file : State.h
 *
**/

#ifndef __STATE_H_
#define __STATE_H_

#include <string>

class baseState {
public:
    baseState(std::string name) : m_strName(name) {}
    virtual ~baseState() {}

public:
    virtual void Handle_state_one() = 0 ;
    virtual void Handle_state_two() = 0 ;
    virtual void Handle_state_three() = 0 ;

private:
    std::string m_strName;
};

class ConcreteStateA : public baseState {
public:
    ConcreteStateA();
    virtual ~ConcreteStateA();

public:
    virtual void Handle_state_one();
    virtual void Handle_state_two();
    virtual void Handle_state_three();
};

class ConcreteStateB : public baseState {
public:
    ConcreteStateB();
    virtual ~ConcreteStateB();

public:
    virtual void Handle_state_one();
    virtual void Handle_state_two();
    virtual void Handle_state_three();
};

class ConcreteStateC : public baseState {
public:
    ConcreteStateC();
    virtual ~ConcreteStateC();

public:
    virtual void Handle_state_one();
    virtual void Handle_state_two();
    virtual void Handle_state_three();
};

#endif
