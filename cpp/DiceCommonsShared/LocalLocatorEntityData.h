// Object: LocalLocatorEntityData
// ClassId: 3396
// RuntimeId: 26936
// TypeInfo: 0x0000000144DB5A90
#include "../Entity/SpatialEntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class LocalLocatorEntityData : public Entity::SpatialEntityData {
        Core::Realm Realm; // 0x60
        char pad_0x64[0xC];
    }; // 0x70
    static_assert(sizeof(LocalLocatorEntityData) == 0x70);
}
#pragma pack(pop)