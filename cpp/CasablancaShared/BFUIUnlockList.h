// Object: BFUIUnlockList
// ClassId: 1262
// RuntimeId: 24977
// TypeInfo: 0x0000000144D86EA0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUIUnlockObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIUnlockList : public Core::DataContainer {
        Array<CasablancaShared::BFUIUnlockObject> Unlocks; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIUnlockList) == 0x20);
}
#pragma pack(pop)