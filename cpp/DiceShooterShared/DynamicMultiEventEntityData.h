// Object: DynamicMultiEventEntityData
// ClassId: 2677
// RuntimeId: 19038
// TypeInfo: 0x0000000144DEE1A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class DynamicMultiEventEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<Float32> EventWeights; // 0x28
        Boolean TrueRandom; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(DynamicMultiEventEntityData) == 0x38);
}
#pragma pack(pop)