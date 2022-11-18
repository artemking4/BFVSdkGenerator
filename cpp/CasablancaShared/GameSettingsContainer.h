// Object: GameSettingsContainer
// ClassId: 830
// RuntimeId: 1492
// TypeInfo: 0x0000000144D4A3F0
#include "../Entity/TreeBase.h"
#include "../CasablancaShared/GameSettingNode.h"
#include "../CasablancaShared/GameSettingsSyncData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GameSettingsContainer : public Entity::TreeBase {
        Array<CasablancaShared::GameSettingNode> GameSettings; // 0x20
        CasablancaShared::GameSettingsSyncData SyncData; // 0x28
    }; // 0x40
    static_assert(sizeof(GameSettingsContainer) == 0x40);
}
#pragma pack(pop)