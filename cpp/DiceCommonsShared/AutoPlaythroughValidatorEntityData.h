// Object: AutoPlaythroughValidatorEntityData
// ClassId: 2085
// RuntimeId: 17768
// TypeInfo: 0x0000000144DBB900
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class AutoPlaythroughValidatorEntityData : public Entity::EntityData {
        Boolean ThrowAwayInvalidData; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(AutoPlaythroughValidatorEntityData) == 0x28);
}
#pragma pack(pop)