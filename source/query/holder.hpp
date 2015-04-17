// oda :: objective data access

#pragma once

#include <data/query>
#include <source/object/holder.hpp>

namespace data
{
    class query::holder : public object::holder
    {
    public:
        holder();
    };
}
