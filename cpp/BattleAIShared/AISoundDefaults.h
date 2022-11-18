// Object: AISoundDefaults
// ClassId: 136
// RuntimeId: 8036
// TypeInfo: 0x0000000144C05EE0
#include "../Core/Asset.h"
#include "../BattleAIShared/AISound.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AISoundDefaults : public Core::Asset {
        Array<BattleAIShared::AISound> Sounds; // 0x20
    }; // 0x28
    static_assert(sizeof(AISoundDefaults) == 0x28);
}
#pragma pack(pop)