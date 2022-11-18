// Object: UIItemDescription
// ClassId: 5403
// RuntimeId: 21383
// TypeInfo: 0x0000000144D9A110
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIItemDescription : public Core::DataContainer {
        Array<Uint32> ItemIds; // 0x18
        CString TelemetryId; // 0x20
    }; // 0x28
    static_assert(sizeof(UIItemDescription) == 0x28);
}
#pragma pack(pop)