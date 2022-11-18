// Object: HorsePhysicsComponentData
// ClassId: 1955
// RuntimeId: 40565
// TypeInfo: 0x0000000144C7CD80
#include "../GameShared/VehiclePhysicsComponentData.h"
#include "../Entity/MaterialDecl.h"

#pragma pack(push, 16)
namespace Casablanca {
    class HorsePhysicsComponentData : public GameShared::VehiclePhysicsComponentData {
        Entity::MaterialDecl HorseMaterial; // 0xC0
        char pad_0xC4[0xC];
    }; // 0xD0
    static_assert(sizeof(HorsePhysicsComponentData) == 0xD0);
}
#pragma pack(pop)