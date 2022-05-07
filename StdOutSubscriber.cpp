//
// Created by Chris Clark on 2022/5/7.
//

#include <iostream>
#include "StdOutSubscriber.h"


void StdOutSubscriber::Receive(const std::string message)
{
    std::cout << message << std::endl;
}
