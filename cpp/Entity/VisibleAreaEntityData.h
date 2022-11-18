// Object: VisibleAreaEntityData
// ClassId: 3479
// RuntimeId: 49861
// TypeInfo: 0x0000000144EE3C50
#include "../Entity/SpatialEntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace Entity {
    class VisibleAreaEntityData : public Entity::SpatialEntityData {
        Core::Realm Realm; // 0x60
        Float32 VisualCullScreenArea; // 0x64
        Uint32 HideTreshold; // 0x68
        char pad_0x6C[0x4];
    }; // 0x70
    static_assert(sizeof(VisibleAreaEntityData) == 0x70);
}
#pragma pack(pop)