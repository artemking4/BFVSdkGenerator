// Object: UIGameEvent
// ClassId: 5398
// RuntimeId: 50784
// TypeInfo: 0x0000000144D1E770
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIGameEvent : public Core::DataContainer {
        Int32 RuntimeHandle; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(UIGameEvent) == 0x20);
}
#pragma pack(pop)