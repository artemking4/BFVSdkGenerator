// Object: WaterShapeData
// ClassId: 1670
// RuntimeId: 44296
// TypeInfo: 0x0000000144BDF860
#include "../Entity/VolumeVectorShapeData.h"
#include "../AmbienceShared/AreaBounds.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class WaterShapeData : public Entity::VolumeVectorShapeData {
        AmbienceShared::AreaBounds Bounds; // 0x38
    }; // 0x48
    static_assert(sizeof(WaterShapeData) == 0x48);
}
#pragma pack(pop)