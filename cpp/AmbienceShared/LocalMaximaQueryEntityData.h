// Object: LocalMaximaQueryEntityData
// ClassId: 2838
// RuntimeId: 23811
// TypeInfo: 0x0000000144BE0670
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../AmbienceShared/AmbientDataAsset.h"
#include "../AmbienceShared/LocalMaximaData.h"
#include "../AmbienceShared/AmbienceQueryMethod.h"
#include "../Core/LocalPlayerId.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class LocalMaximaQueryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        AmbienceShared::AmbientDataAsset Asset; // 0x28
        AmbienceShared::LocalMaximaData LocalMaximaSet; // 0x30
        AmbienceShared::AmbienceQueryMethod QueryMethod; // 0x38
        Core::LocalPlayerId LocalPlayer; // 0x3C
    }; // 0x40
    static_assert(sizeof(LocalMaximaQueryEntityData) == 0x40);
}
#pragma pack(pop)