#include <iostream>
#include <stdlib.h>

using namespace std;

class Singleton
{
public:
    static Singleton &GetInstance()
    {
        static Singleton instance;
        return instance;
    }

    int getValue()
    {
        return this->value;
    }

    void sumValue()
    {
        this->value++;
    }

private:
    Singleton() {}

    int value = 0;
};

int main()
{
    Singleton &instance = Singleton::GetInstance();

    cout << instance.getValue() << endl;
    instance.sumValue();
    cout << instance.getValue() << endl;

    instance = Singleton::GetInstance();
    cout << instance.getValue() << endl;
    
    return 0;
}
