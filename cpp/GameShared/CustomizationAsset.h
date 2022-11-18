// Object: CustomizationAsset
// ClassId: 327
// RuntimeId: 4375
// TypeInfo: 0x0000000144E814C0
#include "../Core/DataContainerPolicyAsset.h"
#include "../GameShared/UnlockContainer.h"

#pragma pack(push, 8)
namespace GameShared {
    class CustomizationAsset : public Core::DataContainerPolicyAsset {
        GameShared::UnlockContainer ResolvedUnlockContainer; // 0x20
    }; // 0x28
    static_assert(sizeof(CustomizationAsset) == 0x28);
}
#pragma pack(pop)