
//Implementing a Stack ADT With a List ADT

#ifndef STACK_H
#define STACK_H


#include "List.h"

class Stack
{
private:

   List data;

public:

// No default c'tor needs to be declared 
// the List "knows" how to initialize itself

// No default d'tor needs to be declared 
// the List "knows" how to destroy itself

   int size();

   void push(int);

   void pop();

   int top();

   void clear();

};

#endif
