#include <iostream>
#include "SimpleFactoryTest.hpp"
#include "MethodFactoryTest.hpp"
#include "AbstractFactoryTest.hpp"
#include "SingletonFactoryTest.hpp"
using namespace std;

int main()
{
    //Test for simple factory
    cout << "Test for simple factory" << endl;
    cout << "============================" << endl;
    test_simple_factory();
    cout << "----------------------------" << endl;

    //Test for method factory
    cout << "Test for method factory" << endl;
    cout << "============================" << endl;
    test_method_factory();
    cout << "----------------------------" << endl;

    //Test for abstract factory
    cout << "Test for abstract factory" << endl;
    cout << "============================" << endl;
    test_abstract_factory();
    cout << "----------------------------" << endl;

    //Test for singleton factory
    cout << "Test for singleton factory" << endl;
    cout << "============================" << endl;
    test_singleton_factory();
    cout << "----------------------------" << endl;
    return 0;
}