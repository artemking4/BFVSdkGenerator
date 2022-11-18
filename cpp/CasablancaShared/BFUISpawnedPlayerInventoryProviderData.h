// Object: BFUISpawnedPlayerInventoryProviderData
// ClassId: 2399
// RuntimeId: 47315
// TypeInfo: 0x0000000144D4C4F0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUILoadoutConfiguration.h"
#include "../CasablancaShared/BFUIPlayerObject.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISpawnedPlayerInventoryProviderData : public Entity::EntityData {
        CasablancaShared::BFUILoadoutConfiguration LoadoutConfiguration; // 0x20
        CasablancaShared::BFUIPlayerObject Player; // 0x28
        Boolean UpdateAutomatically; // 0x30
        Boolean ExcludeDisabledSlots; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(BFUISpawnedPlayerInventoryProviderData) == 0x38);
}
#pragma pack(pop)