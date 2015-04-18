// oda :: objective data access

#pragma once

namespace data
{
    template <typename instance_type>
    class nullable
    {
    public:
        nullable()
            : m_instance(nullptr)
        {
        }

        nullable(instance_type* new_instance)
            : m_instance(new_instance)
        {
        }

        instance_type* operator -> ()
        {
            return m_instance;
        }

        instance_type const* operator -> () const
        {
            return m_instance;
        }

    private:
        instance_type* m_instance;
    };
}
