// Object: ShaderParameterOverridesUnlocksListAsset
// ClassId: 384
// RuntimeId: 10501
// TypeInfo: 0x0000000144C7E680
#include "../Core/DataContainerPolicyAsset.h"
#include "../GameShared/ShaderParameterOverridesUnlockAsset.h"

#pragma pack(push, 8)
namespace Casablanca {
    class ShaderParameterOverridesUnlocksListAsset : public Core::DataContainerPolicyAsset {
        Array<GameShared::ShaderParameterOverridesUnlockAsset> ShaderParameterOverridesUnlocks; // 0x20
    }; // 0x28
    static_assert(sizeof(ShaderParameterOverridesUnlocksListAsset) == 0x28);
}
#pragma pack(pop)