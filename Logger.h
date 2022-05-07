//
// Created by Chris Clark on 2022/5/7.
//

#ifndef MY_ROS2_LOGGER_H
#define MY_ROS2_LOGGER_H

#include <string>
#include <deque>
#include "Subscriber.h"

// The five ROS2 logging levels
// See https://docs.ros.org/en/foxy/Tutorials/Logging-and-logger-configuration.html
enum class LogSeverity {
    debug = 0, info = 1, warn = 2, error = 3,
    fatal = 4
};

// Class for logging messages of varying severity
class Logger
{
public:
    Logger(const LogSeverity log_severity);
    LogSeverity log_severity;

    template<typename MessageType>
    void Log(const MessageType message, const LogSeverity log_severity)
    {
        std::string log_word;
        switch(log_severity)
        {
        case LogSeverity::debug:
               log_word = "DEBUG";
               break;
        case LogSeverity::info:
               log_word = "INFO";
               break;
        case LogSeverity::warn:
               log_word = "WARN";
               break;
        case LogSeverity::error:
               log_word = "ERROR";
               break;
        case LogSeverity::fatal:
               log_word = "FATAL";
               break;
        }

        if (log_severity >= this->log_severity)
        {
            for (const auto & subscriber: _subscribers)
            {
                subscriber->Receive(log_word + ": " + message);
            }
        }
    }
private:
    std::deque<std::shared_ptr<Subscriber>> _subscribers;
};


#endif //MY_ROS2_LOGGER_H
