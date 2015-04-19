// oda :: objective data access

#include <unittest/test_runner.hpp>
#include <unittest/test_suite.hpp>
#include <unittest/test_case.hpp>
#include <algorithm>
#include <utility>
#include <deque>

namespace unittest
{
    namespace
    {
        std::deque<test_base*> g_tests;
    }

    test_suite::test_suite()
    {
        test_runner::register_suite(this);
    }

    void test_suite::add_test(test_base* new_test_case)
    {
        g_tests.push_back(new_test_case);
    }

    void test_suite::run()
    {
        std::for_each(g_tests.begin(), g_tests.end(), 
            [](test_base* test){
                test->run();
            }
        );
    }
}
