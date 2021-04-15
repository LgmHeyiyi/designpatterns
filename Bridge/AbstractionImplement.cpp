#include <iostream>
#include "AbstractionImplement.h"

AbstractionImplement::AbstractionImplement()
{

}

AbstractionImplement::~AbstractionImplement()
{

}

ConcreteAbstractionImplement1::ConcreteAbstractionImplement1()
{
    
}

ConcreteAbstractionImplement1::~ConcreteAbstractionImplement1()
{

}

void ConcreteAbstractionImplement1::operation()
{
    std::cout << "ConcreteAbstractionImplement1" << std::endl;
}

ConcreteAbstractionImplement2::ConcreteAbstractionImplement2()
{
    
}

ConcreteAbstractionImplement2::~ConcreteAbstractionImplement2()
{

}

void ConcreteAbstractionImplement2::operation()
{
    std::cout << "ConcreteAbstractionImplement2" << std::endl;
}