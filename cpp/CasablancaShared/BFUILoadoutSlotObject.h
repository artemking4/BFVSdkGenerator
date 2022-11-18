// Object: BFUILoadoutSlotObject
// ClassId: 1225
// RuntimeId: 27683
// TypeInfo: 0x0000000144D49B80
#include "../Core/DataContainer.h"
#include "../CasablancaShared/CustomizationSlotType.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILoadoutSlotObject : public Core::DataContainer {
        CasablancaShared::CustomizationSlotType SlotType; // 0x18
        char pad_0x1C[0x4];
        CString SlotNameSid; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUILoadoutSlotObject) == 0x28);
}
#pragma pack(pop)