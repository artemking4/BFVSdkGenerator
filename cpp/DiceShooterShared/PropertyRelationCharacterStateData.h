// Object: PropertyRelationCharacterStateData
// ClassId: 4267
// RuntimeId: 65381
// TypeInfo: 0x0000000144DE8710
#include "../Entity/PhysicsMaterialRelationPropertyData.h"
#include "../DiceShooterShared/MaterialRelationCharacterStateRequest.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PropertyRelationCharacterStateData : public Entity::PhysicsMaterialRelationPropertyData {
        Array<DiceShooterShared::MaterialRelationCharacterStateRequest> OnDeathRequests; // 0x20
    }; // 0x28
    static_assert(sizeof(PropertyRelationCharacterStateData) == 0x28);
}
#pragma pack(pop)