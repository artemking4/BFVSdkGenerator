// Object: BiomeQueryEntityData
// ClassId: 2432
// RuntimeId: 48175
// TypeInfo: 0x0000000144BDF5E0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../AmbienceShared/AmbientDataAsset.h"
#include "../Global/CString.h"
#include "../AmbienceShared/AmbienceQueryMethod.h"
#include "../Core/LocalPlayerId.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class BiomeQueryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        AmbienceShared::AmbientDataAsset Asset; // 0x28
        CString Biome; // 0x30
        AmbienceShared::AmbienceQueryMethod QueryMethod; // 0x38
        Core::LocalPlayerId LocalPlayer; // 0x3C
    }; // 0x40
    static_assert(sizeof(BiomeQueryEntityData) == 0x40);
}
#pragma pack(pop)