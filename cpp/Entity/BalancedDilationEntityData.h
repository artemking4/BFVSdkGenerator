// Object: BalancedDilationEntityData
// ClassId: 2428
// RuntimeId: 63263
// TypeInfo: 0x0000000144EE3B50
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Entity/TimeShape.h"

#pragma pack(push, 8)
namespace Entity {
    class BalancedDilationEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 DilationValue; // 0x24
        Float32 RealTimeDuration; // 0x28
        Float32 RecoveryTime; // 0x2C
        Entity::TimeShape DilationShape; // 0x30
        Entity::TimeShape RecoveryShape; // 0x34
    }; // 0x38
    static_assert(sizeof(BalancedDilationEntityData) == 0x38);
}
#pragma pack(pop)