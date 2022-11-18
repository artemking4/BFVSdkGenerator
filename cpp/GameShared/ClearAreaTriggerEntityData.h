// Object: ClearAreaTriggerEntityData
// ClassId: 3459
// RuntimeId: 61682
// TypeInfo: 0x0000000144E8EBE0
#include "../GameShared/TriggerEntityData.h"
#include "../Global/Boolean.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 16)
namespace GameShared {
    class ClearAreaTriggerEntityData : public GameShared::TriggerEntityData {
        GameShared::TeamId TeamOfImmortalSoldiers; // 0x70
        Boolean RemoveSoldiers; // 0x74
        Boolean RemoveVehicles; // 0x75
        Boolean RemoveBangers; // 0x76
        Boolean RemoveEffects; // 0x77
        Boolean RemoveMeshProxies; // 0x78
        Boolean RemoveStaticModels; // 0x79
        Boolean RemoveDebrisClusters; // 0x7A
        Boolean ExcludeImmortalSoldiersInTeam; // 0x7B
        char pad_0x7C[0x4];
    }; // 0x80
    static_assert(sizeof(ClearAreaTriggerEntityData) == 0x80);
}
#pragma pack(pop)