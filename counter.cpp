/*-------------------------------------------------------------------
This is the implementationfor the class Counter. The interface is in 
the file counter.h.

Author: Chibuikem Amaechi
Email:  cramaechi@me.com
-------------------------------------------------------------------*/
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "counter.h"

using namespace std;

Counter::Counter(int theMaxAmount) : maxAmount(theMaxAmount), currentAmount(0)
{
    if (maxAmount < 0)
    {
        cout<<"Invalid argument: Aborting program\n";
        exit(1);
    }
}

Counter::Counter() : maxAmount(9999), currentAmount(0){}

int Counter::getCurrentAmount() const
{
    return currentAmount; 
    //return (currentAmount / 100) + ((currentAmount % 100) / 100.0);
}

void Counter::setAmount(char key, int number)
{
    if (number < 1 || number > 9)
    {
        cout<<"Invalid argument to mutator function: Aborting program\n";
        exit(1);
    }
    else if (key == 'a')
        currentAmount+=number;
    else if (key == 's')
        currentAmount+=(number * 10);
    else if (key == 'd')
        currentAmount+=(number * 100);
    else if (key == 'f')
        currentAmount+=(number*1000);
}

void Counter::reset()
{
    currentAmount = 0;
}

void Counter::incr1()
{
    currentAmount+=(1/100.0);
}

void Counter::incr10()
{
    currentAmount+=(1/10.0);
}

void Counter::incr100()
{
    currentAmount+=1.0;
}

void Counter::incr1000()
{
    currentAmount+=(10.0);
}

bool Counter::overFlow() const
{
    return (currentAmount >= maxAmount);
}
