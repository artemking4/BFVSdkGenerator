// Object: EmitterExclusionVolumeData
// ClassId: 3364
// RuntimeId: 40463
// TypeInfo: 0x0000000144E2AA40
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace Emitter {
    class EmitterExclusionVolumeData : public Entity::SpatialEntityData {
        Uint32 Id; // 0x60
        Boolean Enabled; // 0x64
        char pad_0x65[0xB];
    }; // 0x70
    static_assert(sizeof(EmitterExclusionVolumeData) == 0x70);
}
#pragma pack(pop)