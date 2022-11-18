// Object: AwardObjectFilterEntityData
// ClassId: 2089
// RuntimeId: 57780
// TypeInfo: 0x0000000144D22370
#include "../Entity/EntityData.h"
#include "../CasablancaShared/AwardObject.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AwardObjectFilterEntityData : public Entity::EntityData {
        CasablancaShared::AwardObject AwardObject; // 0x20
        Int32 FilterTimeSpan; // 0x28
        Boolean TriggerOnPropertyChange; // 0x2C
        Boolean TriggerOnStartup; // 0x2D
        char pad_0x2E[0x2];
    }; // 0x30
    static_assert(sizeof(AwardObjectFilterEntityData) == 0x30);
}
#pragma pack(pop)