// oda :: objective data access

#pragma once

#include <unittest/test_suite.hpp>

namespace unittest
{
    class test_object : public test_suite
    {
    public:
        test_object();

        void create_null();
    };
}
