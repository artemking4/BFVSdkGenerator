// Object: DiceUIDeepLinkTargetAssetBase
// ClassId: 470
// RuntimeId: 62977
// TypeInfo: 0x0000000144DBA510
#include "../Core/Asset.h"
#include "../Global/CString.h"
#include "../Entity/PropertyChannel.h"

namespace DiceCommonsShared {
    class DiceUIDeepLinkTargetAssetBase : public Core::Asset {
        CString DefaultTitleSid; // 0x20
        Array<Entity::PropertyChannel> MergedProperties; // 0x28
    }; // 0x30
    static_assert(sizeof(DiceUIDeepLinkTargetAssetBase) == 0x30);
}