// oda :: objective data access

#pragma once

#include <unittest/test_base.hpp>

#define ODA_TEST(owner_suite, test_name) \
    public: static void test_name(); \
    private: test_case<owner_suite, &test_name> m_case_ ## #test_name; \
    public: static void test_name()

namespace unittest
{
    template <typename owner_test_suite, void test_function()>
    class test_case : public test_base
    {
    public:
        test_case_method()
            : m_test_function(test_function)
        {
            owner_test_suite::add_test_case(*this);
        }

        virtual void run()
        {
            m_test_function();
        }

    private:
        void m_test_function();
    };
}
