// Object: UnlockGroup
// ClassId: 452
// RuntimeId: 20526
// TypeInfo: 0x0000000144F49EC0
#include "../Core/DataContainerPolicyAsset.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class UnlockGroup : public Core::DataContainerPolicyAsset {
        Array<Uint32> UnlockIdentifiers; // 0x20
    }; // 0x28
    static_assert(sizeof(UnlockGroup) == 0x28);
}
#pragma pack(pop)