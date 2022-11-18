// Object: VehicleDefinitionComponentData
// ClassId: 1869
// RuntimeId: 46293
// TypeInfo: 0x0000000144DB6290
#include "../Entity/GameComponentData.h"
#include "../Core/Realm.h"
#include "../DiceCommonsShared/VehicleDefinition.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class VehicleDefinitionComponentData : public Entity::GameComponentData {
        Core::Realm Realm; // 0x80
        char pad_0x84[0x4];
        DiceCommonsShared::VehicleDefinition VehicleDefinition; // 0x88
        Boolean EvaluateOnce; // 0x90
        char pad_0x91[0xF];
    }; // 0xA0
    static_assert(sizeof(VehicleDefinitionComponentData) == 0xA0);
}
#pragma pack(pop)