// Object: SpottingEntityData
// ClassId: 3500
// RuntimeId: 63829
// TypeInfo: 0x0000000144C33270
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/LinearTransform.h"
#include "../GameShared/TeamId.h"
#include "../CasablancaShared/SpotType.h"
#include "../Global/Guid.h"

#pragma pack(push, 16)
namespace Casablanca {
    class SpottingEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform GeometryTransform; // 0x30
        Float32 Radius; // 0x70
        GameShared::TeamId TeamToSpot; // 0x74
        CasablancaShared::SpotType SpotType; // 0x78
        Guid SpottingGadgetUnlockGuid; // 0x7C
        Boolean Enabled; // 0x8C
        char pad_0x8D[0x3];
    }; // 0x90
    static_assert(sizeof(SpottingEntityData) == 0x90);
}
#pragma pack(pop)