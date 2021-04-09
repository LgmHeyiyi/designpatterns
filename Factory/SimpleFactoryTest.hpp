#include "SimpleFactory.hpp"

void test_simple_factory()
{
    //Create factory
    SimpleShoesFactory shoes_facotry;

    //Create nike shoes
    Shoes* p_nike_shoe = shoes_facotry.create_shoes(NIKE);
    if(p_nike_shoe != NULL)
    {
        p_nike_shoe->show();
        delete p_nike_shoe;
        p_nike_shoe = NULL;
    }

    //Create anta shoes
    Shoes* p_anta_shoe = shoes_facotry.create_shoes(ANTA);
    if(p_anta_shoe != NULL)
    {
        p_anta_shoe->show();
        delete p_anta_shoe;
        p_anta_shoe = NULL;
    }

    //Create lining shoes
    Shoes* p_ning_shoe = shoes_facotry.create_shoes(NING);
    if(p_ning_shoe != NULL)
    {
        p_ning_shoe->show();
        delete p_ning_shoe;
        p_ning_shoe = NULL;
    }
}