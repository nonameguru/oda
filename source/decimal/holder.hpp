// oda :: objective data access

#pragma once

#include <data/decimal>
#include <source/object/holder.hpp>
#include <cstdint>

namespace data
{
    class decimal::holder : public object::holder
    {
    public:
        holder();

    private:
        std::int64_t m_integral;
        std::uint64_t m_fractional;
        std::int32_t m_precision;
    };
}

// Содержит символы Unicode
