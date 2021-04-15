#include "Abstraction.h"
#include "AbstractionImplement.h"

int main()
{
    AbstractionImplement* conc_abs_imp1 = new ConcreteAbstractionImplement1();
    Abstraction* refine_abs1 = new RefineAbstraction(conc_abs_imp1);
    AbstractionImplement* conc_abs_imp2 = new ConcreteAbstractionImplement2();
    Abstraction* refine_abs2 = new RefineAbstraction(conc_abs_imp2);

    refine_abs1->operation();
    refine_abs2->operation();
}