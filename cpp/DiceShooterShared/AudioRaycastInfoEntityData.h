// Object: AudioRaycastInfoEntityData
// ClassId: 2070
// RuntimeId: 17264
// TypeInfo: 0x0000000144DF3370
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/RaycastEntityResult.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class AudioRaycastInfoEntityData : public Entity::EntityData {
        Boolean UseDefaultMaterialWhenNoMaterial; // 0x20
        Boolean TriggerOnPropertyChange; // 0x21
        char pad_0x22[0xE];
        DiceShooterShared::RaycastEntityResult InputRaycastResult; // 0x30
    }; // 0x70
    static_assert(sizeof(AudioRaycastInfoEntityData) == 0x70);
}
#pragma pack(pop)