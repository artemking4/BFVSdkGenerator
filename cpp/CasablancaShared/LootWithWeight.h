// Object: LootWithWeight
// ClassId: 4244
// RuntimeId: 4835
// TypeInfo: 0x0000000144D023A0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/LootBase.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/GameSettingNode.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class LootWithWeight : public Core::DataContainer {
        CasablancaShared::LootBase Loot; // 0x18
        Int32 Weight; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::GameSettingNode WeightOverrideSetting; // 0x28
    }; // 0x30
    static_assert(sizeof(LootWithWeight) == 0x30);
}
#pragma pack(pop)