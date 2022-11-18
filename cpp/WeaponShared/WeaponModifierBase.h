// Object: WeaponModifierBase
// ClassId: 5656
// RuntimeId: 50386
// TypeInfo: 0x0000000144F7AC60
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class WeaponModifierBase : public Core::DataContainer {
        Int32 Priority; // 0x18
        Boolean DynamicUpdateEnabled; // 0x1C
        char pad_0x1D[0x3];
    }; // 0x20
    static_assert(sizeof(WeaponModifierBase) == 0x20);
}
#pragma pack(pop)