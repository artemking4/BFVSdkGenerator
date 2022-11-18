// Object: AITemplateFilterEntityData
// ClassId: 2018
// RuntimeId: 45241
// TypeInfo: 0x0000000144C12480
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AITemplateFilterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CString> Templates; // 0x28
    }; // 0x30
    static_assert(sizeof(AITemplateFilterEntityData) == 0x30);
}
#pragma pack(pop)