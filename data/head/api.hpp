// Objective Data Access API

#pragma once

#define ODA_MAX_HOLDER_SIZE 64

#if defined(WIN32) && !defined(ODA_STATIC)
#   ifdef ODA_EXPORTS
#       define ODA_API __declspec(dllexport)
#   else
#       define ODA_API __declspec(dllimport)
#   endif
#else
#   define ODA_API
#endif

namespace data
{
    class object;
    class decimal;
    class text;
    class query;
}

// Содержит символы Unicode
