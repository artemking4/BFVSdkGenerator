// Object: ValueUnlockAsset
// ClassId: 448
// RuntimeId: 3462
// TypeInfo: 0x0000000144E8E060
#include "../GameShared/UnlockAssetBase.h"
#include "../GameShared/UnlockValuePair.h"

#pragma pack(push, 8)
namespace GameShared {
    class ValueUnlockAsset : public GameShared::UnlockAssetBase {
        Array<GameShared::UnlockValuePair> UnlockValues; // 0x58
    }; // 0x60
    static_assert(sizeof(ValueUnlockAsset) == 0x60);
}
#pragma pack(pop)