// Object: UIDakarExpandedInventorySlotInfo
// ClassId: 5383
// RuntimeId: 35507
// TypeInfo: 0x0000000144D1F570
#include "../CasablancaShared/UIDakarInventorySlotInfo.h"
#include "../CasablancaShared/BFUIUnlockObject.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDakarExpandedInventorySlotInfo : public CasablancaShared::UIDakarInventorySlotInfo {
        CasablancaShared::BFUIUnlockObject Contents; // 0x28
        Int32 AmmoCount; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(UIDakarExpandedInventorySlotInfo) == 0x38);
}
#pragma pack(pop)