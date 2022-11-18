// Object: DiceUIDeepLinkPayloadEntityData
// ClassId: 2633
// RuntimeId: 37353
// TypeInfo: 0x0000000144DBB480
#include "../Entity/EntityData.h"
#include "../DiceCommonsShared/DiceUIDeepLinkTargetAssetBase.h"
#include "../DiceCommonsShared/DiceUIDeepLinkObject.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DiceUIDeepLinkPayloadEntityData : public Entity::EntityData {
        DiceCommonsShared::DiceUIDeepLinkTargetAssetBase Target; // 0x20
        DiceCommonsShared::DiceUIDeepLinkObject Link; // 0x28
    }; // 0x30
    static_assert(sizeof(DiceUIDeepLinkPayloadEntityData) == 0x30);
}
#pragma pack(pop)