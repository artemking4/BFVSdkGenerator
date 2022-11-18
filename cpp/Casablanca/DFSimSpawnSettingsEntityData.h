// Object: DFSimSpawnSettingsEntityData
// ClassId: 2569
// RuntimeId: 63771
// TypeInfo: 0x0000000144C1DA80
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Casablanca/DFSimShipDefinitionAsset.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Casablanca {
    class DFSimSpawnSettingsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 DisengagementVector; // 0x30
        Float32 Weight; // 0x40
        char pad_0x44[0x4];
        Casablanca::DFSimShipDefinitionAsset Definition; // 0x48
        Boolean EnableShipSound; // 0x50
        char pad_0x51[0xF];
    }; // 0x60
    static_assert(sizeof(DFSimSpawnSettingsEntityData) == 0x60);
}
#pragma pack(pop)