// Object: DiceUIDeepLinkNavigationEntityData
// ClassId: 2632
// RuntimeId: 29693
// TypeInfo: 0x0000000144DBB380
#include "../Entity/EntityData.h"
#include "../DiceCommonsShared/DiceUIDeepLinkContextAssetBase.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DiceUIDeepLinkNavigationEntityData : public Entity::EntityData {
        DiceCommonsShared::DiceUIDeepLinkContextAssetBase Context; // 0x20
    }; // 0x28
    static_assert(sizeof(DiceUIDeepLinkNavigationEntityData) == 0x28);
}
#pragma pack(pop)