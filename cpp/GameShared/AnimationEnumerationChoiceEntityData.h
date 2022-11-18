// Object: AnimationEnumerationChoiceEntityData
// ClassId: 2053
// RuntimeId: 32470
// TypeInfo: 0x0000000144E90E60
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class AnimationEnumerationChoiceEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 Value; // 0x24
    }; // 0x28
    static_assert(sizeof(AnimationEnumerationChoiceEntityData) == 0x28);
}
#pragma pack(pop)