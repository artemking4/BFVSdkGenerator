// Object: ActionMessageSenderEntityData
// ClassId: 2024
// RuntimeId: 54485
// TypeInfo: 0x0000000144D6D0B0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/ActionMessageAsset.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ActionMessageSenderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::ActionMessageAsset Message; // 0x28
        Array<Int32> InputPropertyIndices; // 0x30
        Array<Int32> InputPropertyRefIndices; // 0x38
    }; // 0x40
    static_assert(sizeof(ActionMessageSenderEntityData) == 0x40);
}
#pragma pack(pop)