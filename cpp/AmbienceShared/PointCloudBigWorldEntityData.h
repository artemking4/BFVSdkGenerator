// Object: PointCloudBigWorldEntityData
// ClassId: 3035
// RuntimeId: 24024
// TypeInfo: 0x0000000144BDFE60
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../GameShared/BigWorldSettingsAsset.h"
#include "../Global/Float32.h"
#include "../Core/LocalPlayerId.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class PointCloudBigWorldEntityData : public Entity::EntityData {
        CString PointCloudName; // 0x20
        GameShared::BigWorldSettingsAsset BigWorldSettings; // 0x28
        Float32 Threshold; // 0x30
        Float32 Amount; // 0x34
        Core::LocalPlayerId LocalPlayer; // 0x38
        Boolean EnableOnCreate; // 0x3C
        char pad_0x3D[0x3];
    }; // 0x40
    static_assert(sizeof(PointCloudBigWorldEntityData) == 0x40);
}
#pragma pack(pop)