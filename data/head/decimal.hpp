// oda :: objective data access
// decimal :: decimal value with fixed point
// дес€тична€ дробь с фиксированной точностью

#pragma once

#include <data/object>
#include <cstdint>

namespace data
{
    class ODA_API decimal : public object
    {
    public:
        decimal();

        static const int32_t max_precision;
        static const int32_t auto_precision;

    protected:
        class holder;

    private:
        holder* m_holder;
    };
}
