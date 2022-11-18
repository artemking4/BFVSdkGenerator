// Object: SpartaSendMessageEntityData
// ClassId: 3244
// RuntimeId: 54583
// TypeInfo: 0x0000000144F508C0
#include "../Entity/EntityData.h"
#include "../SpartaShared/PayloadFieldDefinition.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaSendMessageEntityData : public Entity::EntityData {
        SpartaShared::PayloadFieldDefinition PayloadField; // 0x20
    }; // 0x38
    static_assert(sizeof(SpartaSendMessageEntityData) == 0x38);
}
#pragma pack(pop)