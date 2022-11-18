// Object: BFUICheckedUnlockList
// ClassId: 1203
// RuntimeId: 63970
// TypeInfo: 0x0000000144D4C670
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUICheckedUnlockData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUICheckedUnlockList : public Core::DataContainer {
        Array<CasablancaShared::BFUICheckedUnlockData> Unlocks; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUICheckedUnlockList) == 0x20);
}
#pragma pack(pop)