// Object: AutoPlaythroughMoveToEntityData
// ClassId: 3258
// RuntimeId: 55099
// TypeInfo: 0x0000000144DBB880
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class AutoPlaythroughMoveToEntityData : public Entity::SpatialEntityData {
        Boolean DoAssertIfTooFarFromTarget; // 0x60
        char pad_0x61[0xF];
    }; // 0x70
    static_assert(sizeof(AutoPlaythroughMoveToEntityData) == 0x70);
}
#pragma pack(pop)