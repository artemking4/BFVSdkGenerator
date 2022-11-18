// Object: UIDakarFinalKillDataProviderEntityData
// ClassId: 3623
// RuntimeId: 62999
// TypeInfo: 0x0000000144D1E7F0
#include "../Entity/EntityData.h"
#include "../UIIncubatorShared/LocalizedStringId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDakarFinalKillDataProviderEntityData : public Entity::EntityData {
        UIIncubatorShared::LocalizedStringId WeaponNameFormatSid; // 0x20
    }; // 0x28
    static_assert(sizeof(UIDakarFinalKillDataProviderEntityData) == 0x28);
}
#pragma pack(pop)