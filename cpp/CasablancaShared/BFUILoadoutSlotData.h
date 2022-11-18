// Object: BFUILoadoutSlotData
// ClassId: 1223
// RuntimeId: 6906
// TypeInfo: 0x0000000144D4C6F0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUILoadoutSlotObject.h"
#include "../CasablancaShared/BFUIUnlockObject.h"
#include "../CasablancaShared/BFUILoadoutSlotList.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILoadoutSlotData : public Core::DataContainer {
        CasablancaShared::BFUILoadoutSlotObject Slot; // 0x18
        CasablancaShared::BFUIUnlockObject Unlock; // 0x20
        CasablancaShared::BFUILoadoutSlotList Accessories; // 0x28
        Uint32 WeaponComponentHash; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(BFUILoadoutSlotData) == 0x38);
}
#pragma pack(pop)