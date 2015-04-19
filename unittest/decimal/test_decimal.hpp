// oda :: objective data access

#pragma once

#include <unittest/test_suite.hpp>
#include <unittest/test_case.hpp>

namespace unittest
{
    class test_decimal : public test_suite
    {
    public:
        test_decimal();

        void test_create();
    };
}
