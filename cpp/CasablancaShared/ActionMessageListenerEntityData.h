// Object: ActionMessageListenerEntityData
// ClassId: 2022
// RuntimeId: 5177
// TypeInfo: 0x0000000144D6CFB0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/ActionMessageAsset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ActionMessageListenerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::ActionMessageAsset Message; // 0x28
        Boolean Enabled; // 0x30
        Boolean QueueMessages; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(ActionMessageListenerEntityData) == 0x38);
}
#pragma pack(pop)