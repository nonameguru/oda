// oda :: objective data access

#include <unittest/test_base.hpp>

namespace unittest
{
    class test_check : public test_base
    {
    public:
        void is_succeed(bool result);
        void is_failed(bool result);
    };
}
