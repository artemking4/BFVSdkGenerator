// Object: DiceUIDeepLinkInfoEntityData
// ClassId: 2630
// RuntimeId: 62018
// TypeInfo: 0x0000000144DBB400
#include "../Entity/EntityData.h"
#include "../DiceCommonsShared/DiceUIDeepLinkObject.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DiceUIDeepLinkInfoEntityData : public Entity::EntityData {
        DiceCommonsShared::DiceUIDeepLinkObject Link; // 0x20
    }; // 0x28
    static_assert(sizeof(DiceUIDeepLinkInfoEntityData) == 0x28);
}
#pragma pack(pop)