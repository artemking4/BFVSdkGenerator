// Object: AlignmentData
// ClassId: 101
// RuntimeId: 35613
// TypeInfo: 0x0000000144E8D9E0
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class AlignmentData : public Core::DataContainer {
        Int32 AlignAction; // 0x18
        Float32 StopTolerance; // 0x1C
        Float32 Speed; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(AlignmentData) == 0x28);
}
#pragma pack(pop)