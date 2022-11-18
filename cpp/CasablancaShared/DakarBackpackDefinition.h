// Object: DakarBackpackDefinition
// ClassId: 243
// RuntimeId: 25502
// TypeInfo: 0x0000000144D01A20
#include "../Core/Asset.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DakarBackpackDefinition : public Core::Asset {
        Array<Int32> BackpackTierSizes; // 0x20
    }; // 0x28
    static_assert(sizeof(DakarBackpackDefinition) == 0x28);
}
#pragma pack(pop)