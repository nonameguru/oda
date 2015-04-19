// oda :: objective data access

#pragma once

#include <unittest/test_base.hpp>

namespace unittest
{
    class test_suite : public test_base
    {
    public:
        static void add_test(test_base* new_test);

        virtual void run();

    protected:
        test_suite();
    };
}
