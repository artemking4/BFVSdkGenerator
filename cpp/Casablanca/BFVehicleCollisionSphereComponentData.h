// Object: BFVehicleCollisionSphereComponentData
// ClassId: 1719
// RuntimeId: 24996
// TypeInfo: 0x0000000144C7CE80
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class BFVehicleCollisionSphereComponentData : public Entity::GameComponentData {
        Float32 Radius; // 0x80
        Float32 SpeedThreshold; // 0x84
        Float32 VehicleSpeedThreshold; // 0x88
        char pad_0x8C[0x4];
    }; // 0x90
    static_assert(sizeof(BFVehicleCollisionSphereComponentData) == 0x90);
}
#pragma pack(pop)