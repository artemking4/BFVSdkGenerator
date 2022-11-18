// Object: AIAwarenessEntityData
// ClassId: 1986
// RuntimeId: 58354
// TypeInfo: 0x0000000144C11200
#include "../BattleAIShared/AIParameterEntityData.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIAwarenessEntityData : public BattleAIShared::AIParameterEntityData {
        char pad_0x28[0x8];
        Core::Vec3 ForcedAlertPosition; // 0x30
        Boolean OneShot; // 0x40
        char pad_0x41[0xF];
    }; // 0x50
    static_assert(sizeof(AIAwarenessEntityData) == 0x50);
}
#pragma pack(pop)