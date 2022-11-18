// Object: ShrinkingPlayAreaEntityData
// ClassId: 3206
// RuntimeId: 6298
// TypeInfo: 0x0000000144D66070
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/ZoneSizeArray.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Uint32.h"
#include "../Core/Vec3.h"
#include "../Entity/MaterialDecl.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../Core/Vec4.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class ShrinkingPlayAreaEntityData : public Entity::EntityData {
        Float32 StableTime; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 FixedInitialCentre; // 0x30
        Core::Vec4 CurrentZoneColor; // 0x40
        Core::Vec4 TargetZoneColor; // 0x50
        Core::Vec4 OutOfBoundsPrimaryColor; // 0x60
        Core::Vec4 OutOfBoundsSecondaryColor; // 0x70
        Float32 ShrinkTime; // 0x80
        char pad_0x84[0x4];
        CasablancaShared::ZoneSizeArray ZoneSizeArray; // 0x88
        Float32 ZoneHeight; // 0x90
        Float32 WaterLevel; // 0x94
        Float32 GlobalAreaWeightMultiplier; // 0x98
        Int32 SizeIndexForConstrainingCirclesToHardRestrictShape; // 0x9C
        Int32 DamageAmount; // 0xA0
        Float32 DamageFrequency; // 0xA4
        Array<Uint32> IgnoreMeshNameHashes; // 0xA8
        Int32 SizeIndexForDestruction; // 0xB0
        Entity::MaterialDecl DamageMaterial; // 0xB4
        GameShared::UnlockAssetBase DamageUnlockAsset; // 0xB8
        Int32 CurrentZoneWidth; // 0xC0
        Int32 TargetZoneWidth; // 0xC4
        Int32 OutOfBoundsPrimaryStripeWidth; // 0xC8
        Int32 OutOfBoundsSecondaryStripeWidth; // 0xCC
        Float32 FinalZoneRadius; // 0xD0
        Boolean IsFinalZoneFixedAtStart; // 0xD4
        Boolean UseCameraPosition; // 0xD5
        Boolean DestructionEnabled; // 0xD6
        Boolean IsFixedInitialCentre; // 0xD7
        Boolean IsTargetZoneAnnounced; // 0xD8
        char pad_0xD9[0x7];
    }; // 0xE0
    static_assert(sizeof(ShrinkingPlayAreaEntityData) == 0xE0);
}
#pragma pack(pop)