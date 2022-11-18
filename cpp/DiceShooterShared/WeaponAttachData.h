// Object: WeaponAttachData
// ClassId: 1564
// RuntimeId: 42179
// TypeInfo: 0x0000000144DF11D0
#include "../DiceCommonsShared/EntityAttachData.h"
#include "../Entity/GameplayBones.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class WeaponAttachData : public DiceCommonsShared::EntityAttachData {
        Entity::GameplayBones Bone; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(WeaponAttachData) == 0x48);
}
#pragma pack(pop)