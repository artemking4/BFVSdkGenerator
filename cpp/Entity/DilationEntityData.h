// Object: DilationEntityData
// ClassId: 2643
// RuntimeId: 55801
// TypeInfo: 0x0000000144EE3BD0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Entity/DilationPriority.h"
#include "../Entity/TimeDeltaType.h"

#pragma pack(push, 8)
namespace Entity {
    class DilationEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 FadeInTime; // 0x24
        Float32 FadeOutTime; // 0x28
        Float32 RealTimeDuration; // 0x2C
        Entity::DilationPriority Priority; // 0x30
        Float32 DilationValue; // 0x34
        Entity::TimeDeltaType TimeDeltaType; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(DilationEntityData) == 0x40);
}
#pragma pack(pop)