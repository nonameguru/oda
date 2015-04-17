// oda :: objective data access
// query :: constructor to build data query
// конструктор построения запроса данных

#include <data/object>

namespace data
{
    class ODA_API query : public object
    {
    public:
        query();

    protected:
        class holder;
        class instance;

    private:
        holder* m_holder;
    };
}
