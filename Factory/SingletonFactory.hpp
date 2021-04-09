#include <map>
#include <string>

//regist template interface
template <class AbstractProduct_t>
class IProductRegistrar
{
public:
    virtual AbstractProduct_t* create_product() = 0;
    
protected:
    virtual ~IProductRegistrar() {}
    IProductRegistrar() {}

private:
    IProductRegistrar(const IProductRegistrar &);
    const IProductRegistrar& operator=(const IProductRegistrar &);
};

template <class AbstractProduct_t>
class ProductFactory
{
public:
    static ProductFactory<AbstractProduct_t>& get_instance()
    {
        static ProductFactory<AbstractProduct_t> instance;
        return instance;
    }

    void register_product(IProductRegistrar<AbstractProduct_t>* registrar, std::string name)
    {
        m_product_registry[name] = registrar;
    }

    AbstractProduct_t* get_product(std::string name)
    {
        if(m_product_registry.find(name) != m_product_registry.end())
        {
            return m_product_registry[name]->create_product();
        }

        std::cout << "This product not found" << std::endl;
        return NULL;
    }

private:
    ProductFactory() {}
    ~ProductFactory() {}

    ProductFactory(const ProductFactory &);
    const ProductFactory& operator=(const ProductFactory &);

private:
    std::map<std::string, IProductRegistrar<AbstractProduct_t>*> m_product_registry;
};

template<class AbstractProduct_t, class ConcreteProduct_t>
class ProductRegistrar : public IProductRegistrar<AbstractProduct_t>
{
public:
    explicit ProductRegistrar(std::string name)
    {
        ProductFactory<AbstractProduct_t>::get_instance().register_product(this, name);
    }
    AbstractProduct_t* create_product()
    {
        return new ConcreteProduct_t();
    }
};