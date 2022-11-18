// Object: DamageModifierBaseData
// ClassId: 1496
// RuntimeId: 29485
// TypeInfo: 0x0000000144D4AC70
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DamageModifierBaseData : public Core::DataContainer {
        Float32 DamageModifier; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(DamageModifierBaseData) == 0x20);
}
#pragma pack(pop)