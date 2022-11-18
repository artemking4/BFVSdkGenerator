// Object: BangerEntityData
// ClassId: 3304
// RuntimeId: 21502
// TypeInfo: 0x0000000144E840C0
#include "../GameShared/DynamicGamePhysicsEntityData.h"
#include "../Render/MeshAsset.h"
#include "../GameShared/ExplosionEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class BangerEntityData : public GameShared::DynamicGamePhysicsEntityData {
        Render::MeshAsset Mesh; // 0xA0
        GameShared::ExplosionEntityData Explosion; // 0xA8
        Float32 TimeToLive; // 0xB0
        Uint32 NumberOfActivations; // 0xB4
        Uint32 DestructiblePartCount; // 0xB8
        Float32 CullDistanceScale; // 0xBC
        Float32 VisualCullScreenArea; // 0xC0
        Boolean UseVariableNetworkFrequency; // 0xC4
        char pad_0xC5[0xB];
    }; // 0xD0
    static_assert(sizeof(BangerEntityData) == 0xD0);
}
#pragma pack(pop)