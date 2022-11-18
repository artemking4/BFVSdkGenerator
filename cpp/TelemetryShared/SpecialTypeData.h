// Object: SpecialTypeData
// ClassId: 4896
// RuntimeId: 3807
// TypeInfo: 0x0000000144F5C660
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"

namespace TelemetryShared {
    class SpecialTypeData : public Core::DataContainer {
        Boolean OwnsValue; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(SpecialTypeData) == 0x20);
}