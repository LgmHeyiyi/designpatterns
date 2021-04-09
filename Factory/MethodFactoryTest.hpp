#include "MethodFactory.hpp"

void test_method_factory()
{
    //生产耐克鞋子
    MethodShoesFactory* p_nike_factory = new NikeFactory();
    Shoes* p_nike_shoes = p_nike_factory->create_shoes();
    p_nike_shoes->show();
    delete p_nike_shoes;
    delete p_nike_factory;

    //生产安踏鞋子
    MethodShoesFactory* p_anta_factory = new AntaFactory();
    Shoes* p_anta_shoes = p_anta_factory->create_shoes();
    p_anta_shoes->show();
    delete p_anta_shoes;
    delete p_anta_factory;

    //生产李宁鞋子
    MethodShoesFactory* p_ning_factory = new NingFactory();
    Shoes* p_ning_shoes = p_ning_factory->create_shoes();
    p_ning_shoes->show();
    delete p_ning_shoes;
    delete p_ning_factory;

}