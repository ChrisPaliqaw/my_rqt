//
// Created by Chris Clark on 2022/5/7.
//

#ifndef MY_ROS2_SUBSCRIBER_H
#define MY_ROS2_SUBSCRIBER_H

#include <string>

// An abstract class for delegates that wish to handle logger messages
class Subscriber {
public:
    virtual void Receive(const std::string message) = 0;
};


#endif //MY_ROS2_SUBSCRIBER_H
