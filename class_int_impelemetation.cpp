#include <iostream>

class Int
{
private:
    int value;
public:
    Int() {}; // default ctor
    Int(int); //  ctor

    Int& operator=(const Int&);

    operator int(); // convert int

    Int& operator+(const Int&);
    Int& operator+=(const Int&);

    Int& operator-(const Int&);
    Int& operator-=(const Int&);

    int get_result() const {return this->value; }
    void set_value(int n) {this->value = n; }

};

Int::Int(int n) : value{n} {};

Int& Int::operator=(const Int& it)
{
    this->value = it.value;
    return *this;
}

Int& Int::operator+(const Int& it)
{
    this->value = this->value + it.value;
    return *this;
}

Int& Int::operator+=(const Int& it)
{
    this->value = this->value += it.value;
    return *this;
}

Int& Int::operator-(const Int& it)
{
    this->value = this->value - it.value;
    return *this;
}

Int& Int::operator-=(const Int& it)
{
    this->value = this->value -= it.value;
    return *this;
}

Int::operator int()
{
    return this->value;
}

int main()
{
    Int x;
    Int y;
    Int z;
    x = 70;
    y = 20;
    z = x + y;
    std::cout << z.get_result();
}