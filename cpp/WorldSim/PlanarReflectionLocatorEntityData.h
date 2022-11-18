// Object: PlanarReflectionLocatorEntityData
// ClassId: 3434
// RuntimeId: 8601
// TypeInfo: 0x0000000144EC2BC0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace WorldSim {
    class PlanarReflectionLocatorEntityData : public Entity::SpatialEntityData {
        Boolean Enable; // 0x60
        char pad_0x61[0xF];
    }; // 0x70
    static_assert(sizeof(PlanarReflectionLocatorEntityData) == 0x70);
}
#pragma pack(pop)