// Object: AnimationEnumerationEntityData
// ClassId: 2054
// RuntimeId: 54535
// TypeInfo: 0x0000000144E90EE0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/AntEnumeration.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class AnimationEnumerationEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        GameShared::AntEnumeration AntEnum; // 0x28
        Boolean DetectChangesFromStart; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(AnimationEnumerationEntityData) == 0x38);
}
#pragma pack(pop)