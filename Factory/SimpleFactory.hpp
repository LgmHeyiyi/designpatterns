#include "Shoes.hpp"
//simple factory
class SimpleShoesFactory
{
public:
    Shoes* create_shoes(SHOES_TYPE type)
    {
        switch(type)
        {
            case NIKE:
                return new NikeShoes();
                break;
            case ANTA:
                return new AntaShoes();
                break;
            case NING:
                return new NingShoes();
                break;
            default:
                return NULL;
                break;
        }
    }
};