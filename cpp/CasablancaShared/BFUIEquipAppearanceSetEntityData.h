// Object: BFUIEquipAppearanceSetEntityData
// ClassId: 2183
// RuntimeId: 34238
// TypeInfo: 0x0000000144D831A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIBodyInstanceObject.h"
#include "../CasablancaShared/BFUIAppearanceSetInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIEquipAppearanceSetEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIBodyInstanceObject Body; // 0x28
        CasablancaShared::BFUIAppearanceSetInstanceObject AppearanceSet; // 0x30
        Boolean SaveAutomatically; // 0x38
        Boolean SaveOnDeinit; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(BFUIEquipAppearanceSetEntityData) == 0x40);
}
#pragma pack(pop)