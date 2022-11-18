// Object: InputMessageTriggerEntityData
// ClassId: 2802
// RuntimeId: 12813
// TypeInfo: 0x0000000144D289A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/ScreenActionInputEventType.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class InputMessageTriggerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        CasablancaShared::ScreenActionInputEventType EventType; // 0x24
        Boolean EnableAtStart; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(InputMessageTriggerEntityData) == 0x30);
}
#pragma pack(pop)