// Object: AIDebugProxyData
// ClassId: 3249
// RuntimeId: 897
// TypeInfo: 0x0000000144BFF150
#include "../Entity/SpatialEntityData.h"
#include "../Global/CString.h"
#include "../BattleAIShared/CoverQueryData.h"
#include "../BattleAIShared/PreferredRange.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIDebugProxyData : public Entity::SpatialEntityData {
        CString ProxyName; // 0x60
        BattleAIShared::CoverQueryData TestCoverQuery; // 0x68
        BattleAIShared::PreferredRange PreferredWeaponRange; // 0x70
        Uint32 PreferredCoverSlotIndex; // 0x78
        Boolean ForceActive; // 0x7C
        char pad_0x7D[0x3];
    }; // 0x80
    static_assert(sizeof(AIDebugProxyData) == 0x80);
}
#pragma pack(pop)