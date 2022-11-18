// Object: InputRestrictionEntityData
// ClassId: 2805
// RuntimeId: 38629
// TypeInfo: 0x0000000144E76B40
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class InputRestrictionEntityData : public Entity::EntityData {
        Array<Int32> DisabledInputs; // 0x20
        Boolean OverridePreviousInputRestriction; // 0x28
        Boolean ApplyRestrictionsToSpecificPlayer; // 0x29
        Boolean ApplyToAllOnInvalidPlayer; // 0x2A
        Boolean OnlyModifyDisabledInputs; // 0x2B
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(InputRestrictionEntityData) == 0x30);
}
#pragma pack(pop)