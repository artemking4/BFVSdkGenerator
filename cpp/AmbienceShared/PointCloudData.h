// Object: PointCloudData
// ClassId: 4445
// RuntimeId: 25339
// TypeInfo: 0x0000000144BE05F0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class PointCloudData : public Core::DataContainer {
        CString Name; // 0x18
        Uint32 NameHash; // 0x20
        Guid ChunkId; // 0x24
        Uint32 ChunkSize; // 0x34
        Uint32 PointCount; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(PointCloudData) == 0x40);
}
#pragma pack(pop)