// Object: UIDakarExpandedInventorySlotInfoList
// ClassId: 5381
// RuntimeId: 60296
// TypeInfo: 0x0000000144D1F470
#include "../Core/DataContainer.h"
#include "../CasablancaShared/UIDakarExpandedInventorySlotInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDakarExpandedInventorySlotInfoList : public Core::DataContainer {
        Array<CasablancaShared::UIDakarExpandedInventorySlotInfo> SlotInfos; // 0x18
    }; // 0x20
    static_assert(sizeof(UIDakarExpandedInventorySlotInfoList) == 0x20);
}
#pragma pack(pop)