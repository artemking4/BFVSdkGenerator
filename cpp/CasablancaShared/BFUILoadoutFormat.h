// Object: BFUILoadoutFormat
// ClassId: 1220
// RuntimeId: 49687
// TypeInfo: 0x0000000144D4C870
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUILoadoutSlotObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILoadoutFormat : public Core::DataContainer {
        Array<CasablancaShared::BFUILoadoutSlotObject> Slots; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUILoadoutFormat) == 0x20);
}
#pragma pack(pop)