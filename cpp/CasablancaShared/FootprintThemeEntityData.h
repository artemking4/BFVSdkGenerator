// Object: FootprintThemeEntityData
// ClassId: 2767
// RuntimeId: 35221
// TypeInfo: 0x0000000144D09730
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/FootprintBiomeTheme.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FootprintThemeEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::FootprintBiomeTheme Theme; // 0x28
    }; // 0x30
    static_assert(sizeof(FootprintThemeEntityData) == 0x30);
}
#pragma pack(pop)