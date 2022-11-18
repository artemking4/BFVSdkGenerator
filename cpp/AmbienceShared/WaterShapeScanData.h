// Object: WaterShapeScanData
// ClassId: 5644
// RuntimeId: 27480
// TypeInfo: 0x0000000144BDF7E0
#include "../Core/DataContainer.h"
#include "../AmbienceShared/WaterShapeChunkInfo.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class WaterShapeScanData : public Core::DataContainer {
        Array<AmbienceShared::WaterShapeChunkInfo> WaterShapeChunkInfos; // 0x18
    }; // 0x20
    static_assert(sizeof(WaterShapeScanData) == 0x20);
}
#pragma pack(pop)