//
// Created by Chris Clark on 2022/5/7.
//

#ifndef MY_ROS2_LOGGER_H
#define MY_ROS2_LOGGER_H

#include <string>
#include <deque>
#include "Subscriber.h"

enum class LogSeverity {
    debug = 0, info = 1, warn = 2, error = 3,
    fatal = 4
};

class Logger
{
public:
    Logger(const LogSeverity log_severity);
    LogSeverity log_severity;
    void Log(const std::string message, const LogSeverity log_severity);
private:
    std::deque<std::shared_ptr<Subscriber>> _subscribers;
};


#endif //MY_ROS2_LOGGER_H
