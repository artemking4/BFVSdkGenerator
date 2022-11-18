// Object: ConsumableUnlockSetup
// ClassId: 225
// RuntimeId: 33652
// TypeInfo: 0x0000000144D49DF0
#include "../Core/Asset.h"
#include "../CasablancaShared/ConsumableUnlock.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ConsumableUnlockSetup : public Core::Asset {
        Array<CasablancaShared::ConsumableUnlock> ConsumableUnlocks; // 0x20
    }; // 0x28
    static_assert(sizeof(ConsumableUnlockSetup) == 0x28);
}
#pragma pack(pop)