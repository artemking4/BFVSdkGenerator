// Object: LocalizedStringId
// ClassId: 4235
// RuntimeId: 26760
// TypeInfo: 0x0000000144F6E4C0
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class LocalizedStringId : public Core::DataContainer {
        Int32 StringHash; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(LocalizedStringId) == 0x20);
}
#pragma pack(pop)