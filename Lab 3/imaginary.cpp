#include "imaginary.h"

Imaginary::Imaginary()
{
    real = 0;
    imaginary = 0;
}

Imaginary::Imaginary(float r, float i)
{
    real = r;
    imaginary = i;
}

Imaginary::Imaginary(Imaginary radius, float theta) {
    real = radius.getReal()*cos(theta);
    imaginary = radius.getReal()*sin(theta);
}

float Imaginary::getReal() {
    return real;
}

float Imaginary::getImaginary() {
    return imaginary;
}

void Imaginary::setReal(float r) {
    real = r;
}

void Imaginary::setImaginary(float i) {
    imaginary = i;
}

float Imaginary::getRadius() {
    return sqrtf(powf(real, 2) + powf(imaginary, 2));
}

float Imaginary::getTheta() {
    return acos(real / getRadius());
}
//Why would we make these getRadius() and getTheta() or the setters if we never end up using them?

void Imaginary::operator+(Imaginary i) {
    this->real += i.getReal();
    this->imaginary += i.getImaginary();
}

void Imaginary::operator-(Imaginary i) {
    this->real -= i.getReal();
    this->imaginary -= i.getImaginary();
}

void Imaginary::operator*(float s) {
    this->real *= s;
    this->imaginary *= s;
}

void Imaginary::operator/(float d) {
    this->real /= d;
    this->imaginary /= d;
}

bool Imaginary::operator==(Imaginary c) {
    return this->real == c.getReal() && this->imaginary == c.getImaginary();
}

void Imaginary::printNumber() {
    std::cout << real << " + " << imaginary << "i" << std::endl;
}

void Imaginary::printPolar() {
    std::cout << getRadius() << "(cos(" << (this->getImaginary() > 0 ? "+" : "-") << getTheta() << ") " << "+" << " isin(" << (this->getImaginary() > 0 ? "+" : "-") << getTheta() << "))";
}