#pragma once

//-------------------------------------------------------
//  class stack
//  abstract class - simply defines protocol for
//  stack operations	
//-------------------------------------------------------

class Stack
{
public:
    virtual void clear() = 0;
    virtual bool isEmpty() const = 0;
    virtual int pop() = 0;
    virtual void push(int value) = 0;
    virtual int top() const = 0;
};

