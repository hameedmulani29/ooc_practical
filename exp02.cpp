#include<bits/stdc++.h>
using namespace std;

class Complex{
    public:
        int real;
        int imag;

        Complex() {
            real = 0;
            imag = 0;
        }

        Complex(int r, int i){
            real = r;
            imag = i;
        }

        Complex addComplexNumbers(Complex C1, Complex C2){
            Complex result;
            result.real = C1.real + C2.real;
            result.imag = C1.imag + C2.imag;
            return result;
        }
};


int main(){
    Complex C1(4,5);
    cout << "Complex number 1: " << C1.real << " +i " << C1.imag << endl;
    Complex C2(8,9);
    cout << "Complex number 2: " << C2.real << " +i " << C2.imag << endl;

    Complex C3;
    C3 = C3.addComplexNumbers(C1, C2);
    cout << "Sum of complex numbers: " << C3.real << " +i " << C3.imag << endl;
}