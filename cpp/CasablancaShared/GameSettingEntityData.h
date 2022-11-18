// Object: GameSettingEntityData
// ClassId: 2782
// RuntimeId: 26595
// TypeInfo: 0x0000000144D4A470
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/GameSettingNode.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GameSettingEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::GameSettingNode GameSetting; // 0x28
        Int32 OutputPropertyHash; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(GameSettingEntityData) == 0x38);
}
#pragma pack(pop)