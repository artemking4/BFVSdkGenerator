// Object: WaterWaveEntityData
// ClassId: 3483
// RuntimeId: 27982
// TypeInfo: 0x0000000144F72D40
#include "../Entity/SpatialEntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace WaterInteractSim {
    class WaterWaveEntityData : public Entity::SpatialEntityData {
        Float32 Radius; // 0x60
        Float32 Amplitude; // 0x64
        char pad_0x68[0x8];
    }; // 0x70
    static_assert(sizeof(WaterWaveEntityData) == 0x70);
}
#pragma pack(pop)