// Object: GameSettingNode
// ClassId: 5286
// RuntimeId: 6176
// TypeInfo: 0x0000000144D4A370
#include "../Entity/TreeNodeBase.h"
#include "../Global/CString.h"
#include "../CasablancaShared/GameSettingType.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/GameSettingNode.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GameSettingNode : public Entity::TreeNodeBase {
        CString SettingName; // 0x18
        CasablancaShared::GameSettingType SettingType; // 0x20
        char pad_0x24[0x4];
        CString DefaultValue; // 0x28
        CString LowerBound; // 0x30
        CString UpperBound; // 0x38
        Array<CasablancaShared::GameSettingNode> GameSettings; // 0x40
        Boolean IsPublic; // 0x48
        char pad_0x49[0x7];
    }; // 0x50
    static_assert(sizeof(GameSettingNode) == 0x50);
}
#pragma pack(pop)