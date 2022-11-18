// Object: LootLocationEntityData
// ClassId: 3397
// RuntimeId: 2167
// TypeInfo: 0x0000000144D02620
#include "../DiceCommonsShared/LocalLocatorEntityData.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/LootChanceModifier.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class LootLocationEntityData : public DiceCommonsShared::LocalLocatorEntityData {
        Int32 LocationProbability; // 0x70
        char pad_0x74[0x4];
        Array<CasablancaShared::LootChanceModifier> ChanceModifiers; // 0x78
    }; // 0x80
    static_assert(sizeof(LootLocationEntityData) == 0x80);
}
#pragma pack(pop)