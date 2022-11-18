// Object: PredestructionEntityData
// ClassId: 3437
// RuntimeId: 48179
// TypeInfo: 0x0000000144E6D450
#include "../Entity/SpatialEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class PredestructionEntityData : public Entity::SpatialEntityData {
        Float32 Radius; // 0x60
        Boolean Enabled; // 0x64
        char pad_0x65[0xB];
    }; // 0x70
    static_assert(sizeof(PredestructionEntityData) == 0x70);
}
#pragma pack(pop)