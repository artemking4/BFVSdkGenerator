// Object: RetreatingPlayerInfo
// ClassId: 4569
// RuntimeId: 33478
// TypeInfo: 0x0000000144D204F0
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class RetreatingPlayerInfo : public Core::DataContainer {
        Int32 PlayerId; // 0x18
        char pad_0x1C[0x4];
        Core::LinearTransform SoldierTransform; // 0x20
        Core::LinearTransform ScaleAndRotationTransform; // 0x60
    }; // 0xA0
    static_assert(sizeof(RetreatingPlayerInfo) == 0xA0);
}
#pragma pack(pop)