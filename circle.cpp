// Copyright (c) 2020 Tong Gong All rights reserved
//
// Created by Tong Gong
// Created on November 2020
// This is a program to calculate the area and the perimeter of a circle


#include <iostream>
#include <cmath>

int main() {
  std::cout << "If a circle has a radious of 15mm" << std::endl;
  std::cout << "" << std::endl;
  std::cout << "Area is " << (M_PI*pow(15.0, 2.0)) <<  "mm²" << std::endl;
  std::cout << "Perimeter is " << (M_PI*15.0*2.0) << "mm" << std::endl;
}
