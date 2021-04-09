#include "Shoes.hpp"

//method factory
class MethodShoesFactory
{
public:
    virtual ~MethodShoesFactory(){}
    virtual Shoes* create_shoes() = 0;
};

class NikeFactory : public MethodShoesFactory
{
public:
    Shoes* create_shoes()
    {
        return new NikeShoes();
    }
};

class AntaFactory : public MethodShoesFactory
{
public:
    Shoes* create_shoes()
    {
        return new AntaShoes();
    }
};

class NingFactory : public MethodShoesFactory
{
public:
    Shoes* create_shoes()
    {
        return new NingShoes();
    }
};