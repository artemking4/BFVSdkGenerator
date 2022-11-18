// Object: FollowRaycastEntityData
// ClassId: 2532
// RuntimeId: 6479
// TypeInfo: 0x0000000144F70D00
#include "../VehicleShared/ComponentTransformEntityBaseData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Entity/MaterialDecl.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace VehicleShared {
    class FollowRaycastEntityData : public VehicleShared::ComponentTransformEntityBaseData {
        char pad_0x28[0x8];
        Core::Vec3 RaycastDirection; // 0x30
        Float32 Offset; // 0x40
        Float32 MinTravel; // 0x44
        Float32 MaxTravel; // 0x48
        Float32 ExtraRaycastLength; // 0x4C
        Entity::MaterialDecl MaterialPair; // 0x50
        Float32 InterpolationDuration; // 0x54
        CString BoneName; // 0x58
        Float32 BoneOffsetY; // 0x60
        Boolean UseMaxTravelAtNoHit; // 0x64
        char pad_0x65[0xB];
    }; // 0x70
    static_assert(sizeof(FollowRaycastEntityData) == 0x70);
}
#pragma pack(pop)