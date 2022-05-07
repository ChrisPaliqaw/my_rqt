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
