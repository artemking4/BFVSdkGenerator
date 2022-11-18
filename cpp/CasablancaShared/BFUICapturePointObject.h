// Object: BFUICapturePointObject
// ClassId: 1201
// RuntimeId: 30098
// TypeInfo: 0x0000000144D2F6B0
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUICapturePointObject : public Core::DataContainer {
        Int32 Dummy; // 0x18
        char pad_0x1C[0xC];
    }; // 0x28
    static_assert(sizeof(BFUICapturePointObject) == 0x28);
}
#pragma pack(pop)