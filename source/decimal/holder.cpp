// oda :: objective data access
// object::holder :: base object value holder
// базовый контейнер для хранения данных объекта по значению

#pragma once

#include <source/decimal/holder.hpp>

namespace data
{
    decimal::holder::holder()
        : m_integral(0),
          m_fractional(0),
          m_precision(auto_precision)
    {
    }
}
