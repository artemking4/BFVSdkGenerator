// Object: CoastlineData
// ClassId: 1414
// RuntimeId: 7137
// TypeInfo: 0x0000000144BDF560
#include "../Core/DataContainer.h"
#include "../Global/Guid.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"
#include "../AmbienceShared/AreaBounds.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class CoastlineData : public Core::DataContainer {
        Guid WaterSurfaceGuid; // 0x18
        Uint32 IslandCount; // 0x28
        Int32 AreaWidth; // 0x2C
        Int32 AreaHeight; // 0x30
        AmbienceShared::AreaBounds WaterSurfaceBounds; // 0x34
        Guid ChunkId; // 0x44
        Uint32 ChunkSize; // 0x54
    }; // 0x58
    static_assert(sizeof(CoastlineData) == 0x58);
}
#pragma pack(pop)