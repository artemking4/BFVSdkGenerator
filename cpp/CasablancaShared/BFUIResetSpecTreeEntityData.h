// Object: BFUIResetSpecTreeEntityData
// ClassId: 2371
// RuntimeId: 2589
// TypeInfo: 0x0000000144D50950
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUISpecTreeInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIResetSpecTreeEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISpecTreeInstanceObject SpecTree; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIResetSpecTreeEntityData) == 0x30);
}
#pragma pack(pop)