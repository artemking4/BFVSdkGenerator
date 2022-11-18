// Object: PropertyToInputEntityData
// ClassId: 3075
// RuntimeId: 47250
// TypeInfo: 0x0000000144DED020
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/Property.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PropertyToInputEntityData : public Entity::EntityData {
        Array<DiceShooterShared::Property> Properties; // 0x20
        Boolean UseDeltaCompression; // 0x28
        Boolean InterpolationEnable; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(PropertyToInputEntityData) == 0x30);
}
#pragma pack(pop)