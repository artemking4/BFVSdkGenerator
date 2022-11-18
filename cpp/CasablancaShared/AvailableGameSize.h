// Object: AvailableGameSize
// ClassId: 1184
// RuntimeId: 21429
// TypeInfo: 0x0000000144D6DBB0
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AvailableGameSize : public Core::DataContainer {
        Int32 GameSize; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(AvailableGameSize) == 0x20);
}
#pragma pack(pop)