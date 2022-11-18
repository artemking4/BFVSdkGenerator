// Object: ZoneSizeArray
// ClassId: 5723
// RuntimeId: 40763
// TypeInfo: 0x0000000144D64870
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ZoneSizeArray : public Core::DataContainer {
        Array<Float32> ZoneSizes; // 0x18
    }; // 0x20
    static_assert(sizeof(ZoneSizeArray) == 0x20);
}
#pragma pack(pop)