// oda :: objective data access

#pragma once

#include <unittest/test_suite.hpp>

namespace unittest
{
    class test_runner
    {
    public:
        static void register_suite(test_suite* new_test_suite);
        static int run();
        static int argument_count();
        static char* argument(int index);
    };
}
