#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:

    
    Complex()
    {
        real = 0;
        imag = 0;
    }

    
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    // (+)
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    //  (-)
	    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    //  (*)
    Complex operator*(Complex c)
    {
        Complex temp;
        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);
        return temp;
    }

    //  (/)
    Complex operator/(Complex c)
    {
        Complex temp;

        int denominator = (c.real * c.real) + (c.imag * c.imag);

        temp.real = ((real * c.real) + (imag * c.imag)) / denominator;
        temp.imag = ((imag * c.real) - (real * c.imag)) / denominator;

        return temp;
    }

    
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    cout << " Default Constructor " << endl;

    Complex c1;
    c1.display();

    cout << "\n Parameterized Constructor " << endl;

    Complex c2(8, 6);
    Complex c3(2, 3);

    cout << "First Complex Number  : ";
    c2.display();

    cout << "Second Complex Number : ";
    c3.display();

    cout << "\n Operator Overloading " << endl;

    Complex add = c2 + c3;
    Complex sub = c2 - c3;
    Complex mul = c2 * c3;
    Complex div = c2 / c3;

    cout << "Addition       : ";
    add.display();

    cout << "Subtraction    : ";
    sub.display();

    cout << "Multiplication : ";
    mul.display();

    cout << "Division       : ";
    div.display();

    return 0;
}
