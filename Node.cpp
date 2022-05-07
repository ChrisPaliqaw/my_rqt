//
// Created by Chris Clark on 2022/5/7.
//
#include <string>
#include "Node.h"
#include "Logger.h"

using std::string;

Node::Node(string name, const LogSeverity log_severity): name(name) {
    _logger = std::make_shared<Logger>(log_severity);
}

void Node::LogDebug(const string message)
{
    _logger->Log(name + ": " + message, LogSeverity::debug);
}

void Node::LogInfo(const string message)
{
    _logger->Log(name + ": " + message, LogSeverity::info);
}

void Node::LogWarn(const string message)
{
    _logger->Log(name + ": " + message, LogSeverity::warn);
}

void Node::LogError(const string message)
{
    _logger->Log(name + ": " + message, LogSeverity::error);
}

void Node::LogFatal(const string message)
{
    _logger->Log(name + ": " + message, LogSeverity::fatal);
}
