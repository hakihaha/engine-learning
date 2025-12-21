// test_main_log.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

enum class LogLevel
{
    DEBUG,
    INFO,
    ERROR,
    FATAL
};

int main(int argc, char* argv[])
{
    auto logLevel = LogLevel::DEBUG;
    if (argc > 1)
    {
        string levelStr = argv[1];
        if ("info" == levelStr)
        {
            logLevel = LogLevel::INFO;
        }
        else if ("error" == levelStr)
        {
            logLevel = LogLevel::ERROR;

        }
        else if ("fatal" == levelStr)
        {
            logLevel = LogLevel::FATAL;

        }

    }
    LogLevel level = LogLevel::DEBUG;
    string context = "test log 1";
    if (level >= logLevel)
    {
        string levelStr = "debug";
        if (LogLevel::INFO == level)
        {
            levelStr = "info";
        }
        else if (LogLevel::ERROR == level)
        {
            levelStr = "error";
        }
        else if (LogLevel::FATAL == level)
        {
            levelStr = "fatal";
        }
        cout << levelStr + ":" << context << endl;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << "i:" << i << "j:" << j << endl;
            }
        }
    }
}


