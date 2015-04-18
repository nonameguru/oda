// oda :: objective data access

#pragma once

#include <memory>

namespace data
{
    template <typename instance_type>
    class copy_on_write
    {
    public:
        explicit copy_on_write(T* new_instance)
            : m_instance(new_instance)
        {
        }

        instance_type* operator -> ()
        {
            return m_instance.get();
        }

        instance_type const* operator -> () const
        {
            if (!m_instance.unique())
                m_instance.reset(new instance(*m_instance));
            return m_instance.get();
        }

    private:
        std::shared_ptr<instance_type> m_instance;
    };
}
