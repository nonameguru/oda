// oda :: objective data access

#pragma once

#include <data/text>
#include <source/object/holder.hpp>

namespace data
{
    class text::holder : public object::holder
    {
    public:
        holder();
    };
}
