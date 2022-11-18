// Object: DynamicDestructionDepthEntityData
// ClassId: 3362
// RuntimeId: 25651
// TypeInfo: 0x0000000144E6E2D0
#include "../Entity/SpatialEntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Entity/MaterialDecl.h"
#include "../Core/AxisAlignedBox.h"

#pragma pack(push, 16)
namespace GameShared {
    class DynamicDestructionDepthEntityData : public Entity::SpatialEntityData {
        Core::AxisAlignedBox BoundingBox; // 0x60
        Core::Realm Realm; // 0x80
        Float32 DepthScale; // 0x84
        Entity::MaterialDecl PhysicsMaterial; // 0x88
        Boolean Enabled; // 0x8C
        Boolean ForceUpScale; // 0x8D
        Boolean PhysicsMaterialEnable; // 0x8E
        char pad_0x8F[0x1];
    }; // 0x90
    static_assert(sizeof(DynamicDestructionDepthEntityData) == 0x90);
}
#pragma pack(pop)