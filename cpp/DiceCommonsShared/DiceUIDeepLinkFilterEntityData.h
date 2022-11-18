// Object: DiceUIDeepLinkFilterEntityData
// ClassId: 2628
// RuntimeId: 1416
// TypeInfo: 0x0000000144DBB500
#include "../Entity/EntityData.h"
#include "../DiceCommonsShared/DiceUIDeepLinkTargetFilter.h"
#include "../DiceCommonsShared/DiceUIDeepLinkObject.h"
#include "../DiceCommonsShared/DiceUIDeepLinkTargetAssetBase.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DiceUIDeepLinkFilterEntityData : public Entity::EntityData {
        DiceCommonsShared::DiceUIDeepLinkTargetFilter Filter; // 0x20
        DiceCommonsShared::DiceUIDeepLinkObject Link; // 0x38
        DiceCommonsShared::DiceUIDeepLinkTargetAssetBase OverrideComparisonTarget; // 0x40
    }; // 0x48
    static_assert(sizeof(DiceUIDeepLinkFilterEntityData) == 0x48);
}
#pragma pack(pop)