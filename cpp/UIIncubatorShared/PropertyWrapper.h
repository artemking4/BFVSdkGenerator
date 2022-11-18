// Object: PropertyWrapper
// ClassId: 4549
// RuntimeId: 55091
// TypeInfo: 0x0000000144F6DBC0
#include "../Core/DataContainer.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class PropertyWrapper : public Core::DataContainer {
        char pad_0x18[0x10];
    }; // 0x28
    static_assert(sizeof(PropertyWrapper) == 0x28);
}
#pragma pack(pop)