//
// Created by Chris Clark on 2022/5/7.
//

#include <iostream>
#include "StdOutSubscriber.h"

// Demonstrates a simple delegate for printing to cout
// Not currently used in the program, since mainwindow
// implements the Receive method
void StdOutSubscriber::Receive(const std::string message)
{
    std::cout << message << std::endl;
}
