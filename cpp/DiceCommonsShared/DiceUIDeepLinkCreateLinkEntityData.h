// Object: DiceUIDeepLinkCreateLinkEntityData
// ClassId: 2627
// RuntimeId: 27619
// TypeInfo: 0x0000000144DBB300
#include "../Entity/EntityData.h"
#include "../DiceCommonsShared/DiceUIDeepLinkTargetAssetBase.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DiceUIDeepLinkCreateLinkEntityData : public Entity::EntityData {
        DiceCommonsShared::DiceUIDeepLinkTargetAssetBase Target; // 0x20
    }; // 0x28
    static_assert(sizeof(DiceUIDeepLinkCreateLinkEntityData) == 0x28);
}
#pragma pack(pop)