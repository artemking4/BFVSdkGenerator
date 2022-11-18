// Object: BaseSetAsset
// ClassId: 313
// RuntimeId: 30167
// TypeInfo: 0x0000000144DB6790
#include "../Core/DataContainerPolicyAsset.h"
#include "../GameShared/UnlockAssetBase.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class BaseSetAsset : public Core::DataContainerPolicyAsset {
        Array<GameShared::UnlockAssetBase> Unlocks; // 0x20
    }; // 0x28
    static_assert(sizeof(BaseSetAsset) == 0x28);
}
#pragma pack(pop)