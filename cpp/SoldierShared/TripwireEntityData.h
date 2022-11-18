// Object: TripwireEntityData
// ClassId: 3339
// RuntimeId: 34723
// TypeInfo: 0x0000000144F42B30
#include "../Entity/GameComponentEntityData.h"
#include "../Entity/ObjectBlueprint.h"
#include "../Core/Vec3.h"
#include "../Entity/MaterialDecl.h"
#include "../Audio/SoundAsset.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class TripwireEntityData : public Entity::GameComponentEntityData {
        Core::Vec3 WireMeshScale; // 0x90
        Core::Vec3 WireOriginOffset; // 0xA0
        Entity::ObjectBlueprint WireMesh; // 0xB0
        Entity::MaterialDecl WireImpactMaterial; // 0xB8
        char pad_0xBC[0x4];
        Audio::SoundAsset DeploySoundEffect; // 0xC0
        Audio::SoundAsset TripSoundEffect; // 0xC8
        Int32 MaxWireCount; // 0xD0
        Float32 WireMaxLength; // 0xD4
        Float32 WireMinLength; // 0xD8
        Float32 WireMin2DLength; // 0xDC
        Float32 WireMinVerticalOffset; // 0xE0
        Float32 MinYaw; // 0xE4
        Float32 MaxYaw; // 0xE8
        Float32 MinPitch; // 0xEC
        Float32 MaxPitch; // 0xF0
        Uint32 DensityAngle; // 0xF4
        Float32 WireDeploySpeed; // 0xF8
        Float32 OptimalLengthPercentage; // 0xFC
        Boolean AttachWiresToNeutralVehicles; // 0x100
        Boolean AttachWiresToHostileVehicles; // 0x101
        Boolean AttachWiresToFriendlyVehicles; // 0x102
        Boolean ForceTripByFriendlyVehicles; // 0x103
        Boolean ForceTripByFriendlySoldiers; // 0x104
        Boolean UseOptimalLength; // 0x105
        char pad_0x106[0xA];
    }; // 0x110
    static_assert(sizeof(TripwireEntityData) == 0x110);
}
#pragma pack(pop)