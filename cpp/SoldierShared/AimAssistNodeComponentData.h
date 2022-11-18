// Object: AimAssistNodeComponentData
// ClassId: 1707
// RuntimeId: 51054
// TypeInfo: 0x0000000144F39890
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../GameShared/TeamId.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class AimAssistNodeComponentData : public Entity::GameComponentData {
        Core::Vec3 StickyCenterOffset; // 0x80
        GameShared::TeamId Team; // 0x90
        Boolean Enabled; // 0x94
        Boolean GetTeamFromOwner; // 0x95
        Boolean ColorPlayerReticle; // 0x96
        char pad_0x97[0x9];
    }; // 0xA0
    static_assert(sizeof(AimAssistNodeComponentData) == 0xA0);
}
#pragma pack(pop)