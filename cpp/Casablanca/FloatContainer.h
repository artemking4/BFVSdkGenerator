// Object: FloatContainer
// ClassId: 1629
// RuntimeId: 55166
// TypeInfo: 0x0000000144C32570
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class FloatContainer : public Core::DataContainer {
        Float32 Value; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(FloatContainer) == 0x20);
}
#pragma pack(pop)