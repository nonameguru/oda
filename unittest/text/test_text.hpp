// oda :: objective data access

#pragma once

#include <unittest/test_suite.hpp>

namespace unittest
{
    class test_text : public test_suite
    {
    public:
        test_text();

        void empty_text();
    };
}
