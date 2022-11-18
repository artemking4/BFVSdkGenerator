// Object: DiceUIDeepLinkObject
// ClassId: 1519
// RuntimeId: 47933
// TypeInfo: 0x0000000144DBA490
#include "../Core/DataContainer.h"
#include "../DiceCommonsShared/DiceUIDeepLinkTargetAssetBase.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DiceUIDeepLinkObject : public Core::DataContainer {
        DiceCommonsShared::DiceUIDeepLinkTargetAssetBase Target; // 0x18
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(DiceUIDeepLinkObject) == 0x30);
}
#pragma pack(pop)