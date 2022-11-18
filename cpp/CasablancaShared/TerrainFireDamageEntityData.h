// Object: TerrainFireDamageEntityData
// ClassId: 3564
// RuntimeId: 37388
// TypeInfo: 0x0000000144D5B2E0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/DamageOverTimeData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class TerrainFireDamageEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::DamageOverTimeData DamageOverTime; // 0x28
        Boolean Enabled; // 0x48
        Boolean DoTDamageShielded; // 0x49
        Boolean DoTDamageFriendly; // 0x4A
        char pad_0x4B[0x5];
    }; // 0x50
    static_assert(sizeof(TerrainFireDamageEntityData) == 0x50);
}
#pragma pack(pop)