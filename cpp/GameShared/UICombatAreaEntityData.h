// Object: UICombatAreaEntityData
// ClassId: 4075
// RuntimeId: 34747
// TypeInfo: 0x0000000144E77940
#include "../Entity/GameObjectData.h"
#include "../GameShared/UICombatAreaAsset.h"

#pragma pack(push, 8)
namespace GameShared {
    class UICombatAreaEntityData : public Entity::GameObjectData {
        GameShared::UICombatAreaAsset Asset; // 0x20
    }; // 0x28
    static_assert(sizeof(UICombatAreaEntityData) == 0x28);
}
#pragma pack(pop)