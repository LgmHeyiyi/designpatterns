#include "SingletonFactory.hpp"
#include "Shoes.hpp"

void test_singleton_factory()
{
    //regist shoes into factory
    std::string product_name = "nike";
    ProductRegistrar<Shoes, NikeShoes> nike_registrar(product_name);
    Shoes* p_nike_shoes = ProductFactory<Shoes>::get_instance().get_product(product_name);
    p_nike_shoes->show();
    delete p_nike_shoes;

    //regist clothes into factory
    std::string product_nm = "uniqo";
    ProductRegistrar<Clothes, UniqoClothes> uniqo_registrar(product_nm);
    Clothes* p_uniqo_clothes = ProductFactory<Clothes>::get_instance().get_product(product_nm);
    p_uniqo_clothes->show();
    delete p_nike_shoes;
}