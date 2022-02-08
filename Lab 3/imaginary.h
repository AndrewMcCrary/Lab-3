#pragma once
#include <cmath>
#include <iostream>

class Imaginary{
private:
    float real;
    float imaginary;
public:
    Imaginary();
    Imaginary(float r, float i);
    Imaginary(Imaginary radius, float theta);
    float getReal();
    float getImaginary();
    void setReal(float);
    void setImaginary(float);
    float getRadius();
    float getTheta();
    void printNumber();
    void printPolar();

    void operator+(Imaginary);
    void operator-(Imaginary);
    void operator*(float);
    void operator/(float);
    bool operator==(Imaginary);
};