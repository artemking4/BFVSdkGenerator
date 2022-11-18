// Object: LocalLightEntityData
// ClassId: 3386
// RuntimeId: 63417
// TypeInfo: 0x0000000144EC2940
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace WorldSim {
    class LocalLightEntityData : public Entity::SpatialEntityData {
        Boolean Enabled; // 0x60
        char pad_0x61[0xF];
    }; // 0x70
    static_assert(sizeof(LocalLightEntityData) == 0x70);
}
#pragma pack(pop)