#include "Abstraction.h"

Abstraction::Abstraction()
{

}

Abstraction::~Abstraction()
{

}

RefineAbstraction::RefineAbstraction(AbstractionImplement* abs_imp)
{
    this->m_abs_imp = abs_imp;
}

RefineAbstraction::~RefineAbstraction()
{

}

void RefineAbstraction::operation()
{
    m_abs_imp->operation();
}