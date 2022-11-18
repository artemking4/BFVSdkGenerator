// Object: MultiUnlockAsset
// ClassId: 437
// RuntimeId: 12156
// TypeInfo: 0x0000000144E8E3E0
#include "../GameShared/UnlockAssetBase.h"

#pragma pack(push, 8)
namespace GameShared {
    class MultiUnlockAsset : public GameShared::UnlockAssetBase {
        Array<GameShared::UnlockAssetBase> Unlocks; // 0x58
    }; // 0x60
    static_assert(sizeof(MultiUnlockAsset) == 0x60);
}
#pragma pack(pop)