#pragma once
//Abstract shoes
class Shoes
{
public:
    virtual ~Shoes(){}
    virtual void show() = 0;
};

//Nike shoes
class NikeShoes : public Shoes
{
public:
    void show()
    {
        std::cout << "This is Nike shoes!" << std::endl;
    }
};

//Anta shoes
class AntaShoes : public Shoes
{
public:
    void show()
    {
        std::cout << "This is Anta shoes!" << std::endl;
    }
};

//LiNing shoes
class NingShoes : public Shoes
{
public:
    void show()
    {
        std::cout << "This is LiNing shoes!" << std::endl;
    }
};

enum SHOES_TYPE
{
    NIKE,
    ANTA,
    NING
};

class Clothes
{
public:
    virtual ~Clothes(){}
    virtual void show() = 0;
};

class UniqoClothes : public Clothes
{
public:
    void show()
    {
        std::cout << "This is Uniqo Clothes!" << std::endl;
    }
};