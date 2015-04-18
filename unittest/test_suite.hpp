// oda :: objective data access

#pragma once

#include <deque>
#include <functional>

namespace unittest
{
    class test_suite
    {
    public:
        test_suite();
    
        typedef std::function<void (test_suite::*)()> test_case;

        void add_test_case(test_case new_test_case);

    private:
        std::deque<test_case> m_test_cases;
    };
}
