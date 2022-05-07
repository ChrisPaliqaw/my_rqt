//
// Created by Chris Clark on 2022/5/7.
//
#include <string>
#include "Node.h"
#include "Logger.h"

using std::string;

// A class representing robot behavior
Node::Node(string name, const LogSeverity log_severity): name(name) {
    _logger = std::make_shared<Logger>(log_severity);
}

// A collection of convenience methods for logging messages
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
