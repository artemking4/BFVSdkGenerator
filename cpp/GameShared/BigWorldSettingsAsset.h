// Object: BigWorldSettingsAsset
// ClassId: 186
// RuntimeId: 9103
// TypeInfo: 0x0000000144E78140
#include "../Core/Asset.h"
#include "../GameShared/BigWorldSetting.h"

#pragma pack(push, 8)
namespace GameShared {
    class BigWorldSettingsAsset : public Core::Asset {
        Array<GameShared::BigWorldSetting> Settings; // 0x20
    }; // 0x28
    static_assert(sizeof(BigWorldSettingsAsset) == 0x28);
}
#pragma pack(pop)