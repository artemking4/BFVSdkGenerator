// Object: PlayerDeathTypeEntityData
// ClassId: 3019
// RuntimeId: 59312
// TypeInfo: 0x0000000144D4AE70
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PlayerDeathTypeEntityData : public Entity::EntityData {
        Boolean ForceDeathTypeForHeadshotAndExplosion; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(PlayerDeathTypeEntityData) == 0x28);
}
#pragma pack(pop)