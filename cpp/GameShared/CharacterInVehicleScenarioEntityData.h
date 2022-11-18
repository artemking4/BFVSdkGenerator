// Object: CharacterInVehicleScenarioEntityData
// ClassId: 2466
// RuntimeId: 38501
// TypeInfo: 0x0000000144E760C0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Ant/AntRef.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class CharacterInVehicleScenarioEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Ant::AntRef ScenarioAntRef; // 0x24
        Int32 LevelId; // 0x38
        Int32 ScenarioId; // 0x3C
        Int32 ActorId; // 0x40
        Int32 PartId; // 0x44
        Boolean Enabled; // 0x48
        char pad_0x49[0x7];
    }; // 0x50
    static_assert(sizeof(CharacterInVehicleScenarioEntityData) == 0x50);
}
#pragma pack(pop)