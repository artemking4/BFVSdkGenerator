// Object: DynamicModelEntityData
// ClassId: 3305
// RuntimeId: 58949
// TypeInfo: 0x0000000144E6DD50
#include "../GameShared/DynamicGamePhysicsEntityData.h"
#include "../Render/MeshAsset.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace GameShared {
    class DynamicModelEntityData : public GameShared::DynamicGamePhysicsEntityData {
        Render::MeshAsset Mesh; // 0xA0
        Float32 TimeToLive; // 0xA8
        Uint32 DestructiblePartCount; // 0xAC
        Float32 CullDistanceScale; // 0xB0
        Boolean ClientSideOnly; // 0xB4
        Boolean NoCollision; // 0xB5
        char pad_0xB6[0xA];
    }; // 0xC0
    static_assert(sizeof(DynamicModelEntityData) == 0xC0);
}
#pragma pack(pop)