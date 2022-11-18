// Object: IndirectCubeMapData
// ClassId: 3379
// RuntimeId: 52616
// TypeInfo: 0x0000000144EC26C0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class IndirectCubeMapData : public Entity::SpatialEntityData {
        Uint32 Resolution; // 0x60
        Float32 Scale; // 0x64
        Float32 FadeDistance; // 0x68
        Boolean Enable; // 0x6C
        char pad_0x6D[0x3];
    }; // 0x70
    static_assert(sizeof(IndirectCubeMapData) == 0x70);
}
#pragma pack(pop)