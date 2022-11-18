// Object: PartLinkData
// ClassId: 4407
// RuntimeId: 55589
// TypeInfo: 0x0000000144E82940
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace GameShared {
    class PartLinkData : public Core::DataContainer {
        Uint32 PartComponentIndex1; // 0x18
        Uint32 PartComponentIndex2; // 0x1C
    }; // 0x20
    static_assert(sizeof(PartLinkData) == 0x20);
}
#pragma pack(pop)