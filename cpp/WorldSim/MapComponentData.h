// Object: MapComponentData
// ClassId: 1893
// RuntimeId: 14461
// TypeInfo: 0x0000000144EC1B40
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace WorldSim {
    class MapComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec3 ClearColor; // 0x90
        Float32 RasterAmount; // 0xA0
        Boolean Enable; // 0xA4
        Uint8 FieldFlagOverride0; // 0xA5
        char pad_0xA6[0xA];
    }; // 0xB0
    static_assert(sizeof(MapComponentData) == 0xB0);
}
#pragma pack(pop)