// Object: FloatArray
// ClassId: 1626
// RuntimeId: 49035
// TypeInfo: 0x0000000144C2E380
#include "../Core/DataContainer.h"
#include "../Casablanca/FloatContainer.h"

#pragma pack(push, 8)
namespace Casablanca {
    class FloatArray : public Core::DataContainer {
        Array<Casablanca::FloatContainer> Array; // 0x18
    }; // 0x20
    static_assert(sizeof(FloatArray) == 0x20);
}
#pragma pack(pop)