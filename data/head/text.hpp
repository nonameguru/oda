// oda :: objective data access
// text :: object for textual data
// объект текстовых данных

#include <data/object>

namespace data
{
    class ODA_API text : public object
    {
    public:
        text();

    protected:
        class holder;
        class instance;

    private:
        holder* m_holder;
    };
}
