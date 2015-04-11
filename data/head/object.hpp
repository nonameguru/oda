﻿// Objective Data Access base class

#pragma once

#include <data/api>

namespace data
{
    class ODA_API object
    {
    public:
        object();
        virtual ~object();

    protected:
        class holder;

    private:
        holder* m_holder;
        char m_buffer[ODA_MAX_HOLDER_SIZE];
    };
}

// Содержит символы Unicode
