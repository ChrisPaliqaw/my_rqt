//
// Created by Chris Clark on 2022/5/7.
//

#ifndef MY_ROS2_STDOUTSUBSCRIBER_H
#define MY_ROS2_STDOUTSUBSCRIBER_H

#include "Subscriber.h"

class StdOutSubscriber: public Subscriber
{
    void Receive(const std::string message);
};


#endif //MY_ROS2_STDOUTSUBSCRIBER_H
