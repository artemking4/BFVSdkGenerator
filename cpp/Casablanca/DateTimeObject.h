// Object: DateTimeObject
// ClassId: 1504
// RuntimeId: 35459
// TypeInfo: 0x0000000144C1CF80
#include "../Core/DataContainer.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DateTimeObject : public Core::DataContainer {
        char pad_0x18[0x8];
    }; // 0x20
    static_assert(sizeof(DateTimeObject) == 0x20);
}
#pragma pack(pop)