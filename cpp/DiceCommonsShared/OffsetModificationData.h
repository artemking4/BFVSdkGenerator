// Object: OffsetModificationData
// ClassId: 4384
// RuntimeId: 29886
// TypeInfo: 0x0000000144DBAD80
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class OffsetModificationData : public Core::DataContainer {
        Boolean OffsetXAxisInWorldSpace; // 0x18
        Boolean OffsetYAxisInWorldSpace; // 0x19
        Boolean OffsetZAxisInWorldSpace; // 0x1A
        char pad_0x1B[0x5];
        Core::LinearTransform Offset; // 0x20
    }; // 0x60
    static_assert(sizeof(OffsetModificationData) == 0x60);
}
#pragma pack(pop)