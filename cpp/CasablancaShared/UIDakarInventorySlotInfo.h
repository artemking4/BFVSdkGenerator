// Object: UIDakarInventorySlotInfo
// ClassId: 5382
// RuntimeId: 54954
// TypeInfo: 0x0000000144D1F5F0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/UIDakarInventorySlotState.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDakarInventorySlotInfo : public Core::DataContainer {
        CasablancaShared::UIDakarInventorySlotState SlotState; // 0x18
        Int32 Slot; // 0x1C
        Boolean HasSwapTarget; // 0x20
        Boolean ExternallyHighlighted; // 0x21
        char pad_0x22[0x6];
    }; // 0x28
    static_assert(sizeof(UIDakarInventorySlotInfo) == 0x28);
}
#pragma pack(pop)