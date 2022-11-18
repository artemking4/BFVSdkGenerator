// Object: AmbientDestructionEntityData
// ClassId: 2046
// RuntimeId: 11787
// TypeInfo: 0x0000000144BDF660
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class AmbientDestructionEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString PointCloudName; // 0x28
        Float32 ExplosionRadiusMultiplier; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(AmbientDestructionEntityData) == 0x38);
}
#pragma pack(pop)