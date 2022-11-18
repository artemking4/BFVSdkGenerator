// Object: RandomMultiEventEntityData
// ClassId: 3095
// RuntimeId: 51758
// TypeInfo: 0x0000000144EE59D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Entity {
    class RandomMultiEventEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<Float32> RandomEventWeight; // 0x28
        Boolean UniformDistribution; // 0x30
        Boolean DisableOutputOnTrigger; // 0x31
        Boolean ResetOutputsWhenAllHasTriggered; // 0x32
        Boolean TrueRandom; // 0x33
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(RandomMultiEventEntityData) == 0x38);
}
#pragma pack(pop)