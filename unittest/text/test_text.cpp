// oda :: objective data access

#include <unittest/text/test_text.hpp>

namespace unittest
{
    test_text::test_text()
    {
        add_test_case(empty_text);
    }

    void test_text::empty_text()
    {
    }
}
