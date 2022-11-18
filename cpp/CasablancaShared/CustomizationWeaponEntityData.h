// Object: CustomizationWeaponEntityData
// ClassId: 3349
// RuntimeId: 52657
// TypeInfo: 0x0000000144D35C30
#include "../Entity/SpatialEntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/CustomizationSoldierAnimationBinding.h"
#include "../Entity/SkeletonAsset.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUILoadoutSlotData.h"
#include "../CasablancaShared/BFUIWeaponLoadoutObject.h"
#include "../Core/Vec2.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class CustomizationWeaponEntityData : public Entity::SpatialEntityData {
        Core::Vec3 RotationOnScreen; // 0x60
        Core::Realm Realm; // 0x70
        CasablancaShared::CustomizationSoldierAnimationBinding AnimationBinding; // 0x74
        char pad_0x18C[0x4];
        Entity::SkeletonAsset WeaponSkeleton; // 0x190
        CasablancaShared::BFUILoadoutSlotData LoadoutSlot; // 0x198
        CasablancaShared::BFUIWeaponLoadoutObject WeaponLoadout; // 0x1A0
        Core::Vec2 ScreenPosition; // 0x1A8
        Float32 MaxPercentageOfScreen; // 0x1B0
        Boolean Enabled; // 0x1B4
        Boolean CenterInFrontOfCamera; // 0x1B5
        Boolean ShowEmblem; // 0x1B6
        char pad_0x1B7[0x9];
    }; // 0x1C0
    static_assert(sizeof(CustomizationWeaponEntityData) == 0x1C0);
}
#pragma pack(pop)