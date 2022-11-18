// Object: LootChanceModifier
// ClassId: 4243
// RuntimeId: 59309
// TypeInfo: 0x0000000144D025A0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/LootBase.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class LootChanceModifier : public Core::DataContainer {
        CasablancaShared::LootBase Loot; // 0x18
        Int32 ChanceAdditive; // 0x20
        Boolean ExcludeFromLocation; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(LootChanceModifier) == 0x28);
}
#pragma pack(pop)