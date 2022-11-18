// Object: BFUIPlayerKitStatsEntityData
// ClassId: 2338
// RuntimeId: 4852
// TypeInfo: 0x0000000144D86FA0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIPlayerKitObject.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPlayerKitStatsEntityData : public Entity::EntityData {
        CasablancaShared::BFUIPlayerKitObject Kit; // 0x20
        GameShared::TeamId TeamId; // 0x28
        Boolean UpdateAutomatically; // 0x2C
        Boolean OutputForLocalTeam; // 0x2D
        char pad_0x2E[0x2];
    }; // 0x30
    static_assert(sizeof(BFUIPlayerKitStatsEntityData) == 0x30);
}
#pragma pack(pop)