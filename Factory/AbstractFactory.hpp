//AbstractProduct_t is abstract product
template<class AbstractProduct_t>
class AbstractFactory
{
public:
    virtual AbstractProduct_t *create_product() = 0;
    virtual ~AbstractFactory(){}
};

//ConcreteProduct_t is concrete product
template<class AbstractProduct_t, class ConcreteProduct_t>
class ConcreteFactory : public AbstractFactory<AbstractProduct_t>
{
public:
    AbstractProduct_t *create_product()
    {
        return new ConcreteProduct_t();
    }
};