// Object: CustomizationSoldierEntityData
// ClassId: 3347
// RuntimeId: 25592
// TypeInfo: 0x0000000144D35D30
#include "../Entity/SpatialEntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/CustomizationSoldierAnimationBinding.h"
#include "../Entity/SkeletonAsset.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUISoldierLoadoutObject.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class CustomizationSoldierEntityData : public Entity::SpatialEntityData {
        Core::Realm Realm; // 0x60
        CasablancaShared::CustomizationSoldierAnimationBinding AnimationBinding; // 0x64
        char pad_0x17C[0x4];
        Entity::SkeletonAsset WeaponSkeleton; // 0x180
        CasablancaShared::BFUISoldierLoadoutObject SoldierLoadout; // 0x188
        Int32 StreamSlotIndex; // 0x190
        Float32 StreamingLodLevelThreshold; // 0x194
        Boolean Enabled; // 0x198
        Boolean RepresentsLocalPlayer; // 0x199
        Boolean ForceClothSimulationOff; // 0x19A
        Boolean ShowEmblem; // 0x19B
        Boolean SimulateCloth; // 0x19C
        Boolean DisableRenderBones; // 0x19D
        Boolean AllowRendering; // 0x19E
        char pad_0x19F[0x1];
    }; // 0x1A0
    static_assert(sizeof(CustomizationSoldierEntityData) == 0x1A0);
}
#pragma pack(pop)