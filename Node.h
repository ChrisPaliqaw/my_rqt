//
// Created by Chris Clark on 2022/5/7.
//

#ifndef MY_ROS2_NODE_H
#define MY_ROS2_NODE_H

#include <string>
#include <memory>
#include "Logger.h"

class Node
{
public:
    Node(const std::string name, const LogSeverity log_severity=LogSeverity::info);
    Node();
    const std::string name;
    void LogDebug(const std::string message);
    void LogInfo(const std::string message);
    void LogWarn(const std::string message);
    void LogError(const std::string message);
    void LogFatal(const std::string message);
private:
    std::shared_ptr<Logger> _logger;
};


#endif //MY_ROS2_NODE_H
