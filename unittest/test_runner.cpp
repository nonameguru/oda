// oda :: objective data access

#pragma once

#include <unittest/test_runner.hpp>
#include <unittest/test_suite.hpp>
#include <algorithm>
#include <deque>

namespace
{
    int g_argument_count;
    char** g_arguments;
}

int main(int argc, char **argv)
{
    g_argument_count = argc;
    g_arguments = argv;

    return unittest::test_runner::run();
}

namespace unittest
{
    namespace
    {
        std::deque<test_suite*> g_test_suites;
    }

    void test_runner::register_suite(test_suite* new_test_suite)
    {
        g_test_suites.push_back(new_test_suite);
    }

    int test_runner::run()
    {
        try
        {
            std::for_each(g_test_suites.begin(), g_test_suites.end(),
                [](test_suite& suite) {
                    suite.run();
                }
            );
        }
        catch (...)
        {
            return -1; // TODO: work with exceptions
        }

        return 0;
    }

    int test_runner::argument_count()
    {
        return g_argument_count;
    }

    char* test_runner::argument(int index)
    {
        return (index >= 0 && index < g_argument_count) ? g_arguments[index] : ""; // TODO: handle out of range
    }
}
