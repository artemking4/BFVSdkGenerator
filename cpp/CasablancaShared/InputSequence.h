// Object: InputSequence
// ClassId: 4169
// RuntimeId: 18298
// TypeInfo: 0x0000000144D9A510
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

namespace CasablancaShared {
    class InputSequence : public Core::DataContainer {
        CString Name; // 0x18
    }; // 0x20
    static_assert(sizeof(InputSequence) == 0x20);
}