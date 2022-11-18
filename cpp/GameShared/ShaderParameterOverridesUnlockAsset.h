// Object: ShaderParameterOverridesUnlockAsset
// ClassId: 441
// RuntimeId: 4750
// TypeInfo: 0x0000000144E8DFE0
#include "../GameShared/UnlockAsset.h"
#include "../GameShared/ShaderParameterOverride.h"

#pragma pack(push, 8)
namespace GameShared {
    class ShaderParameterOverridesUnlockAsset : public GameShared::UnlockAsset {
        Array<GameShared::ShaderParameterOverride> ShaderParameterOverrides; // 0x58
    }; // 0x60
    static_assert(sizeof(ShaderParameterOverridesUnlockAsset) == 0x60);
}
#pragma pack(pop)