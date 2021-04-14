#include<iostream>

class IFactory
{
public:
    virtual void make_product() = 0;
    virtual ~IFactory(){}
};

class RealFactory : public IFactory
{
public:
    void make_product()
    {
        std::cout << "produce real product" << std::endl;
    }
};

class FactoryProxy : public IFactory
{
public:
    FactoryProxy(IFactory* real_factory)
    {
        m_real_factory = real_factory;
    }

    void make_product()
    {
        m_real_factory->make_product();
    }
private:
    IFactory* m_real_factory;
};

int main()
{
    IFactory* real_factory = new RealFactory();
    FactoryProxy* factory_proxy = new FactoryProxy(real_factory);
    factory_proxy->make_product();
}