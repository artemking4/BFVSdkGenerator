// Object: TypeInfoFieldValue
// ClassId: 5358
// RuntimeId: 18659
// TypeInfo: 0x0000000144BE9AF0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

namespace Core {
    class TypeInfoFieldValue : public Core::DataContainer {
        CString Field; // 0x18
    }; // 0x20
    static_assert(sizeof(TypeInfoFieldValue) == 0x20);
}