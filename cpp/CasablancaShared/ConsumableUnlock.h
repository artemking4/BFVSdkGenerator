// Object: ConsumableUnlock
// ClassId: 1424
// RuntimeId: 16314
// TypeInfo: 0x0000000144D49E70
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../GameShared/BasicUnlockInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ConsumableUnlock : public Core::DataContainer {
        CString Code; // 0x18
        GameShared::BasicUnlockInfo ConsumableUnlockInfo; // 0x20
    }; // 0x60
    static_assert(sizeof(ConsumableUnlock) == 0x60);
}
#pragma pack(pop)