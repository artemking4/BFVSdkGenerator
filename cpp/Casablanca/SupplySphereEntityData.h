// Object: SupplySphereEntityData
// ClassId: 3448
// RuntimeId: 57218
// TypeInfo: 0x0000000144C31670
#include "../Entity/SpatialEntityData.h"
#include "../SoldierShared/SupplyData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../GameShared/TeamId.h"
#include "../Core/Vec3.h"
#include "../Global/CString.h"
#include "../GameShared/UIWorldIconBehavior.h"

#pragma pack(push, 16)
namespace Casablanca {
    class SupplySphereEntityData : public Entity::SpatialEntityData {
        Core::Vec3 InteractionOffset; // 0x60
        Core::Vec3 IconOffset; // 0x70
        SoldierShared::SupplyData SupplyData; // 0x80
        Float32 DelayBetweenSuppliesOverride; // 0xB0
        GameShared::TeamId Team; // 0xB4
        CString IconName; // 0xB8
        GameShared::UIWorldIconBehavior IconBehavior; // 0xC0
        Float32 DisplayWithinRadius; // 0xC8
        Boolean Enabled; // 0xCC
        Boolean CheckOcclusionForInteraction; // 0xCD
        Boolean IsAmmo; // 0xCE
        Boolean IsHealth; // 0xCF
        Boolean UseDisplayWithinRadius; // 0xD0
        char pad_0xD1[0xF];
    }; // 0xE0
    static_assert(sizeof(SupplySphereEntityData) == 0xE0);
}
#pragma pack(pop)