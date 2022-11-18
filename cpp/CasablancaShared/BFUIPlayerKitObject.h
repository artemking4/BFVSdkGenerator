// Object: BFUIPlayerKitObject
// ClassId: 1235
// RuntimeId: 16479
// TypeInfo: 0x0000000144D7FFA0
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPlayerKitObject : public Core::DataContainer {
        Int32 Dummy; // 0x18
        char pad_0x1C[0x14];
    }; // 0x30
    static_assert(sizeof(BFUIPlayerKitObject) == 0x30);
}
#pragma pack(pop)