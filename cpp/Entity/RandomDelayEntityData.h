// Object: RandomDelayEntityData
// ClassId: 3091
// RuntimeId: 21209
// TypeInfo: 0x0000000144EE54D0
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Entity/TimeDeltaType.h"

#pragma pack(push, 8)
namespace Entity {
    class RandomDelayEntityData : public Entity::EntityData {
        Float32 MinDelay; // 0x20
        Float32 MaxDelay; // 0x24
        Core::Realm Realm; // 0x28
        Entity::TimeDeltaType TimeDeltaType; // 0x2C
        Boolean AutoStart; // 0x30
        Boolean RunOnce; // 0x31
        Boolean TrueRandom; // 0x32
        char pad_0x33[0x5];
    }; // 0x38
    static_assert(sizeof(RandomDelayEntityData) == 0x38);
}
#pragma pack(pop)