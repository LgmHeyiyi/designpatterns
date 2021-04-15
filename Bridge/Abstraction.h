#include "AbstractionImplement.h"

class Abstraction
{
public:
    Abstraction();
    virtual ~Abstraction();
    virtual void operation() = 0;
};

class RefineAbstraction : public Abstraction
{
public:
    RefineAbstraction(AbstractionImplement* abs_imp);
    ~RefineAbstraction();
    void operation();

private:
    AbstractionImplement* m_abs_imp;
};