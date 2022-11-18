// Object: SpartaMessageEntityData
// ClassId: 3242
// RuntimeId: 3892
// TypeInfo: 0x0000000144F50940
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../SpartaShared/PayloadFieldDefinition.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaMessageEntityData : public Entity::EntityData {
        Array<SpartaShared::PayloadFieldDefinition> Properties; // 0x20
        Boolean FireEventForAllMessageTypes; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(SpartaMessageEntityData) == 0x30);
}
#pragma pack(pop)