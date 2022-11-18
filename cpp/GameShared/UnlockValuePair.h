// Object: UnlockValuePair
// ClassId: 5552
// RuntimeId: 22021
// TypeInfo: 0x0000000144E8E260
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class UnlockValuePair : public Core::DataContainer {
        CString Id; // 0x18
    }; // 0x20
    static_assert(sizeof(UnlockValuePair) == 0x20);
}
#pragma pack(pop)