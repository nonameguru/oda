﻿// oda :: objective data access

#pragma once

#include <unittest/test_suite.hpp>

namespace unittest
{
    class test_decimal : public test_suite
    {
    public:
        test_decimal();

        void test_create();
    };
}
