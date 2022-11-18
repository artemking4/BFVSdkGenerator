// Object: GlobalConstraints
// ClassId: 4090
// RuntimeId: 40680
// TypeInfo: 0x0000000144D6E1B0
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GlobalConstraints : public Core::DataContainer {
        Int32 MaxPlaygroundsPerPlayer; // 0x18
        Int32 MaxGameServersPerPlayer; // 0x1C
    }; // 0x20
    static_assert(sizeof(GlobalConstraints) == 0x20);
}
#pragma pack(pop)