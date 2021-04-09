#include "Shoes.hpp"
#include "AbstractFactory.hpp"

void test_abstract_factory()
{
    ConcreteFactory<Shoes, NikeShoes> nike_factory;
    Shoes* p_nike_shoes = nike_factory.create_product();
    p_nike_shoes->show();
    delete p_nike_shoes;
    
    ConcreteFactory<Clothes,UniqoClothes> uniqo_factory;
    Clothes* p_uniqo_clothes = uniqo_factory.create_product();
    p_uniqo_clothes->show();
    delete p_uniqo_clothes;

}