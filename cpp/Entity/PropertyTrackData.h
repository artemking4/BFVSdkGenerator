// Object: PropertyTrackData
// ClassId: 4539
// RuntimeId: 2501
// TypeInfo: 0x0000000144ED89F0
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Entity {
    class PropertyTrackData : public Core::DataContainer {
        Int32 Id; // 0x18
        char pad_0x1C[0x4];
        Array<Int32> Times; // 0x20
    }; // 0x28
    static_assert(sizeof(PropertyTrackData) == 0x28);
}
#pragma pack(pop)