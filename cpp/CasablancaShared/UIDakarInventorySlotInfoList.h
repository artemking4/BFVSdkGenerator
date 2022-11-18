// Object: UIDakarInventorySlotInfoList
// ClassId: 5384
// RuntimeId: 52894
// TypeInfo: 0x0000000144D1F4F0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/UIDakarInventorySlotInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDakarInventorySlotInfoList : public Core::DataContainer {
        Array<CasablancaShared::UIDakarInventorySlotInfo> SlotInfos; // 0x18
    }; // 0x20
    static_assert(sizeof(UIDakarInventorySlotInfoList) == 0x20);
}
#pragma pack(pop)