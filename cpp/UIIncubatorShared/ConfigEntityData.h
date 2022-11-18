// Object: ConfigEntityData
// ClassId: 2542
// RuntimeId: 64907
// TypeInfo: 0x0000000144F6E5C0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../UIIncubatorShared/ConfigEntityAssetData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class ConfigEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        UIIncubatorShared::ConfigEntityAssetData AssetToOutput; // 0x28
        Float32 neededToCreateOuputs; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(ConfigEntityData) == 0x38);
}
#pragma pack(pop)