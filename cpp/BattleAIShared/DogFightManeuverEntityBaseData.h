// Object: DogFightManeuverEntityBaseData
// ClassId: 2646
// RuntimeId: 10952
// TypeInfo: 0x0000000144C19330
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

namespace BattleAIShared {
    class DogFightManeuverEntityBaseData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 MaxRollAngle; // 0x24
        Boolean Enabled; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(DogFightManeuverEntityBaseData) == 0x30);
}