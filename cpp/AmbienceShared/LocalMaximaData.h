// Object: LocalMaximaData
// ClassId: 4232
// RuntimeId: 51048
// TypeInfo: 0x0000000144BE06F0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../AmbienceShared/AreaBounds.h"
#include "../Global/Guid.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class LocalMaximaData : public Core::DataContainer {
        Float32 SampleInterval; // 0x18
        AmbienceShared::AreaBounds ScanArea; // 0x1C
        Guid ChunkId; // 0x2C
        Uint32 ChunkSize; // 0x3C
    }; // 0x40
    static_assert(sizeof(LocalMaximaData) == 0x40);
}
#pragma pack(pop)