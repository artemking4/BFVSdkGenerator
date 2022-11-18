// Object: VehicleExitPointComponentData
// ClassId: 1872
// RuntimeId: 16872
// TypeInfo: 0x0000000144E8D760
#include "../Entity/GameComponentData.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace GameShared {
    class VehicleExitPointComponentData : public Entity::GameComponentData {
        Core::Vec3 Impulse; // 0x80
        Int32 Ordinal; // 0x90
        Float32 TerrainHeight; // 0x94
        Float32 Velocity; // 0x98
        Int32 Animation; // 0x9C
        Boolean InheritCameraDirection; // 0xA0
        Boolean CheckForVehicleOverrun; // 0xA1
        char pad_0xA2[0xE];
    }; // 0xB0
    static_assert(sizeof(VehicleExitPointComponentData) == 0xB0);
}
#pragma pack(pop)