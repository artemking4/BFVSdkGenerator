// Object: BFUIBoostsEntityData
// ClassId: 2163
// RuntimeId: 48658
// TypeInfo: 0x0000000144D30520
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIPlayerObject.h"
#include "../CasablancaShared/BoostOutputFilter.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIBoostsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIPlayerObject OptionalPlayer; // 0x28
        CasablancaShared::BoostOutputFilter AffectingBoostsOutputFilter; // 0x30
        Boolean UpdateAutomatically; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(BFUIBoostsEntityData) == 0x38);
}
#pragma pack(pop)