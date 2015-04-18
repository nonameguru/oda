// oda :: objective data access

#include <unittest/test_suite.hpp>

namespace unittest
{
    test_suite::test_suite()
    {
    }

    void test_suite::add_test_case(test_case new_test_case)
    {
        m_test_cases.push_back(new_test_case);
    }
}
