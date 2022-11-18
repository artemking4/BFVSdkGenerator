// Object: InvertedInputRestrictionEntityData
// ClassId: 2813
// RuntimeId: 19132
// TypeInfo: 0x0000000144E76AC0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class InvertedInputRestrictionEntityData : public Entity::EntityData {
        Array<Int32> EnabledInputs; // 0x20
        Boolean OverridePreviousInputRestriction; // 0x28
        Boolean ApplyRestrictionsToSpecificPlayer; // 0x29
        Boolean ApplyToAllOnInvalidPlayer; // 0x2A
        char pad_0x2B[0x5];
    }; // 0x30
    static_assert(sizeof(InvertedInputRestrictionEntityData) == 0x30);
}
#pragma pack(pop)