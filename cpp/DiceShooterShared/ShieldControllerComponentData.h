// Object: ShieldControllerComponentData
// ClassId: 1833
// RuntimeId: 33631
// TypeInfo: 0x0000000144DF1050
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../GameShared/TeamId.h"
#include "../Entity/ObjectBlueprint.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class ShieldControllerComponentData : public Entity::GameComponentData {
        Core::LinearTransform ShieldOffsetTransform; // 0x80
        GameShared::TeamId Team; // 0xC0
        char pad_0xC4[0x4];
        Entity::ObjectBlueprint Shield; // 0xC8
        Array<Entity::ObjectBlueprint> Shields; // 0xD0
        Int32 ShieldIndex; // 0xD8
        Float32 ShieldRadius; // 0xDC
        Boolean Enabled; // 0xE0
        Boolean AllowCreation; // 0xE1
        Boolean IgnoreExplosionOutsideRadius; // 0xE2
        char pad_0xE3[0xD];
    }; // 0xF0
    static_assert(sizeof(ShieldControllerComponentData) == 0xF0);
}
#pragma pack(pop)