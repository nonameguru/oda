// oda :: objective data access

#pragma once

#include <data/query>
#include <source/object/holder.hpp>
#include <source/tools/copy_on_write.hpp>

namespace data
{
    class query::holder : public object::holder
    {
    public:
        holder();

    private:
        copy_on_write<instance> m_instance;
    };
}
