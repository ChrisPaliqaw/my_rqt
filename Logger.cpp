//
// Created by Chris Clark on 2022/5/7.
//

#include <iostream>
#include <memory>
#include "Logger.h"
#include "StdOutSubscriber.h"

Logger::Logger(const LogSeverity log_severity): log_severity(log_severity)
{
    _subscribers.push_back(std::make_shared<StdOutSubscriber>());
}

void Logger::Log(const std::string message, const LogSeverity log_severity)
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
        for (auto subscriber: _subscribers)
        {
            subscriber->Receive(log_word + ": " + message);
        }
    }
}
