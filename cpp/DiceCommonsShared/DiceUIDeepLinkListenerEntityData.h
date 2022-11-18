// Object: DiceUIDeepLinkListenerEntityData
// ClassId: 2631
// RuntimeId: 39042
// TypeInfo: 0x0000000144DBB580
#include "../Entity/EntityData.h"
#include "../DiceCommonsShared/DiceUIDeepLinkContextAssetBase.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DiceUIDeepLinkListenerEntityData : public Entity::EntityData {
        DiceCommonsShared::DiceUIDeepLinkContextAssetBase Context; // 0x20
    }; // 0x28
    static_assert(sizeof(DiceUIDeepLinkListenerEntityData) == 0x28);
}
#pragma pack(pop)